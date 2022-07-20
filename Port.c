 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Rawan Waleed
 ******************************************************************************/

#include "Port.h"
#include "Port_REG.h"

#if (PORT_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and Dio Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif

#endif

   
/* point to the required Port Registers base address */
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED; 
STATIC const Port_ConfigType* Port_ConfigPtr = NULL_PTR;

 /************************************************************************************
* Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Initializes the Port Driver module.
************************************************************************************/
   
  void Port_Init( const Port_ConfigType* ConfigPtr )
  {
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* check if the input configuration pointer is not a NULL_PTR */
	if (NULL_PTR == ConfigPtr)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		     PORT_E_PARAM_POINTER);
                Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		     PORT_E_PARAM_CONFIG);
	}
	else
  #endif
        {
           Port_ConfigPtr=ConfigPtr;
           Port_Status  = PORT_INITIALIZED;
           Port_PinType i=0;
           for(i=0;i<PORTT_CONFIGURED_CHANNLES;i++)
           {
                volatile uint32 * Port_Ptr = NULL_PTR;
                volatile uint32 delay = 0;
            
                switch(ConfigPtr->Channels[i].port_num)
                {
                    case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                             break;
                    case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                             break;
                    case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                             break;
                    case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                             break;
                    case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                             break;
                    case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                             break;
                }
                  /* Enable clock for PORT and allow time for clock to start*/
                  SYSCTL_REGCGC2_REG |= (1<<ConfigPtr->Channels[i].port_num);
                  delay = SYSCTL_REGCGC2_REG;
                  
                  
                  if( ((ConfigPtr->Channels[i].port_num == 3) && (ConfigPtr->Channels[i].pin_num == 7)) || ((ConfigPtr->Channels[i].port_num == 5) && (ConfigPtr->Channels[i].pin_num == 0)) ) /* PD7 or PF0 */
                  {
                      *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_LOCK_REG_OFFSET) = 0x4C4F434B;                     /* Unlock the GPIOCR register */   
                      SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_COMMIT_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);  /* Set the corresponding bit in GPIOCR register to allow changes on this pin */
                  }
                  else if( (ConfigPtr->Channels[i].port_num == 2) && (ConfigPtr->Channels[i].pin_num <= 3) ) /* PC0 to PC3 */
                  {
                      /* Do Nothing ...  this is the JTAG pins */
                  }
                  else
                  {
                      /* Do Nothing ... No need to unlock the commit register for this pin */
                  }
                  
                
                  if (PORT_PIN_MODE_DIO == ConfigPtr->Channels[i].mode)
		{
			/* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (ConfigPtr->Channels[i].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);
		}
		else if (PORT_PIN_MODE_ADC == ConfigPtr->Channels[i].mode)
		{
			/* Clear the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Disable Alternative function for this pin by clearING the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (ConfigPtr->Channels[i].pin_num * 4));

			/* Set the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);
		}
		else /* Any other mode */
		{
			/* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Enable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);

			/* Set the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) |= (ConfigPtr->Channels[i].mode & 0x0000000F << (ConfigPtr->Channels[i].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);
		}


                  
                 
                
                if(ConfigPtr->Channels[i].direction == PORT_PIN_OUT)
                {
                    /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
                    SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);                
                    
                    if(ConfigPtr->Channels[i].initial_value == PORT_PIN_LEVEL_HIGH)
                    {
                        /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
                        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);          
                    }
                    else
                    {
                        /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
                        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);        
                    }
                }else if(ConfigPtr->Channels[i].direction == PORT_PIN_IN)
                {
                    /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
                    CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);             
                    
                    if(ConfigPtr->Channels[i].resistor == PULL_UP)
                    {
                        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);       /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
                    }
                    else if(ConfigPtr->Channels[i].resistor == PULL_DOWN)
                    {
                        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);     /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
                    }
                    else
                    {
                        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);     /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
                        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , ConfigPtr->Channels[i].pin_num);   /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
                    }
                }
                else
                {
                    /* Do Nothing */
                }
              
           }
            /*
		 * Set the module state to initialized and point to the PB configuration structure using a global pointer.
		 * This global pointer is global to be used by other functions to read the PB configuration structures
		 */
		
               
        }
        

    
    

    
  
  }



/************************************************************************************
* Service Name: Port_SetPinDirection
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin - Port Pin ID number
                  -Direction - Port Pin Direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin direction
************************************************************************************/
 #if (PORT_SET_PIN_DIRECTION_API == STD_ON) 
 void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction )
 {
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if(Port_Status == PORT_NOT_INITIALIZED)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_DIRECTION_SID, PORT_E_UNINIT);
		}
		else
		{
                
                }

		/* check if incorrect Port Pin ID passed */
		if(Pin >= PORTT_CONFIGURED_CHANNLES)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_DIRECTION_SID, PORT_E_PARAM_PIN);
		}
		else
		{

		}

		/* check if Port Pin not configured as changeable */
		if(Port_ConfigPtr->Channels[Pin].pin_direction_changeable == FALSE)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_DIRECTION_SID, PORT_E_DIRECTION_UNCHANGEABLE);
		}
		else
		{

		}
	#endif

	volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */

	switch(Port_ConfigPtr->Channels[Pin].port_num)
	{
		case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                          break;
		case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                          break;
		case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                         break;
		case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                          break;
		case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                          break;
		case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                          break;
	}

	if( (Port_ConfigPtr->Channels[Pin].port_num == 2) && (Port_ConfigPtr->Channels[Pin].pin_num <= 3)) /* PC0 to PC3 */
	{
		/* Do Nothing ...  this is the JTAG pins */
		return;
	}

	if(Direction == PORT_PIN_OUT)
	{
		/* Set the corresponding bit in the GPIODIR register to configure it as output pin */
		SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
	}
	else if(Direction == PORT_PIN_IN)
	{
		/* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
		CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
	}
	else
	{

	}
  
 }
#endif

   
   
/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refreshes port direction.
************************************************************************************/
   
 void Port_RefreshPortDirection( void )
  {
        #if (PORT_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if(Port_Status == PORT_NOT_INITIALIZED)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_REFRESH_PORT_DIRECTION_SID, PORT_E_UNINIT);
		}
		else	
	#endif
        {
        /* point to the required Port Registers base address */
        volatile uint32 * PortGpio_Ptr = NULL_PTR; 
        for(int i=0;i<PORTT_CONFIGURED_CHANNLES;i++)
        {
           if(Port_ConfigPtr->Channels[i].pin_direction_changeable == FALSE)
           {
             
                if( (Port_ConfigPtr->Channels[i].port_num == 2) && (Port_ConfigPtr->Channels[i].pin_num <= 3)) /* PC0 to PC3 */
                {
                        /* Do Nothing ...  this is the JTAG pins */
                        return;
                }
             
                  switch(Port_ConfigPtr->Channels[i].port_num)
                  {
                    case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                              break;
                    case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                              break;
                    case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                             break;
                    case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                              break;
                    case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                              break;
                    case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                              break;
                    }
                 
                 
                if(Port_ConfigPtr->Channels[i].direction == PORT_PIN_OUT)
                {
                    /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
                    SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[i].pin_num);                
                    
                }else if(Port_ConfigPtr->Channels[i].direction == PORT_PIN_IN)
                {
                    /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
                    CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[i].pin_num);             
             
                }
                else
                {
                    /* Do Nothing */
                }
                
                
             }
              else
              {
                  /* Do Nothing */
              }
          } 
        }
  }   
   
   
   
 /************************************************************************************
* Service Name: Port_GetVersionInfo
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): versioninfo - Pointer to where to store the version information of this module.
* Return value: None
* Description: Returns the version information of this module.
************************************************************************************/
 #if (PORT_VERSION_INFO_API == STD_ON)  
 void Port_GetVersionInfo( Std_VersionInfoType* versioninfo )
 {
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if input pointer is not Null pointer */
	if(NULL_PTR == versioninfo)
	{
		/* Report to DET  */
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		                PORT_E_PARAM_POINTER);
	}
	else
    #endif /* (DIO_DEV_ERROR_DETECT == STD_ON) */
	{
		/* Copy the vendor Id */
		versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
		/* Copy the module Id */
		versioninfo->moduleID = (uint16)PORT_MODULE_ID;
		/* Copy Software Major Version */
		versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
		/* Copy Software Minor Version */
		versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
		/* Copy Software Patch Version */
		versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
	}
  
 } 
 #endif  


 /************************************************************************************
* Service Name: Port_SetPinMode
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): Pin - Port Pin ID number
                   Mode - New Port Pin mode to be set on port pin.
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin mode.
************************************************************************************/
 #if (PORT_SET_PIN_MODE_API == STD_ON) 
 void Port_SetPinMode( Port_PinType Pin, Port_PinModeType Mode )
 {
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if(Port_Status == PORT_NOT_INITIALIZED)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID, PORT_E_UNINIT);
		}
		else
		{
                    /* Do Nothing */
                }

		/* check if incorrect Port Pin ID passed */
		if(Pin >= PORTT_CONFIGURED_CHANNLES)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID, PORT_E_PARAM_PIN);
		}
		else
		{
                     /* Do Nothing */
		}

		/* check if Port Pin not configured as changeable */
		if(Port_ConfigPtr->Channels[Pin].pin_mode_changeable == STD_OFF)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID, PORT_E_DIRECTION_UNCHANGEABLE);
		}
		else
		{
                      /* Do Nothing */
		}
                
                if(Port_ConfigPtr->Channels[Pin].mode > MAX_MODE)
                {
                    Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID, PORT_E_PARAM_INVALID_MODE);
		}
		else
		{
                      /* Do Nothing */
		}
                  
	#endif
                
        volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */

	switch(Port_ConfigPtr->Channels[Pin].port_num)
	{
		case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                         break;
		case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                         break;
		case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                         break;
		case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		         break;
		case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		         break;
		case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		         break;
	}

	if( (Port_ConfigPtr->Channels[Pin].port_num == 2) && (Port_ConfigPtr->Channels[Pin].pin_num <= 3)) /* PC0 to PC3 */
	{
		/* Do Nothing ...  this is the JTAG pins */
		return;
	}
        
                if (PORT_PIN_MODE_DIO == Port_ConfigPtr->Channels[Pin].mode)
		{
			/* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
		}
		else if (PORT_PIN_MODE_ADC == Port_ConfigPtr->Channels[Pin].mode)
		{
			/* Clear the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Disable Alternative function for this pin by clearING the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
		}
		else /* Any other mode */
		{
			/* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Enable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Set the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) |= (Port_ConfigPtr->Channels[Pin].mode & 0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
		}
        

        
  
 } 
 #endif  
   

