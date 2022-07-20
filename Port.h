 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Rawan Waleed Ahmed
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

/* Id for the company in the AUTOSAR */
#define PORT_VENDOR_ID    (1000U)

/* Port Module Id */
#define PORT_MODULE_ID    (124U)

/* Port Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for Port Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)


/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* Dio Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif


/* Non AUTOSAR files */
#include "Common_Macros.h"
 
   
/******************************************************************************
 *                      API Service Id Macros                                 *
******************************************************************************/
#define PORTA  (Port_PortType)(0U)
#define PORTB  (Port_PortType)(1U)
#define PORTC  (Port_PortType)(2U)
#define PORTD  (Port_PortType)(3U)
#define PORTE  (Port_PortType)(4U)
#define PORTF  (Port_PortType)(5U)
#define MAX_MODE               10


/* Service ID for PORT Initialization */
#define PORT_INIT_SID           (uint8)0x00
   
/* Service ID for PORT set pin direction */
#define PORT_SET_PIN_DIRECTION_SID           (uint8)0x01
   
/* Service ID for PORT refresh direction */
#define PORT_REFRESH_PORT_DIRECTION_SID           (uint8)0x02
   
/* Service ID for PORT get version information */
#define PORT_GET_VERSION_INFO_SID           (uint8)0x03
   
 /* Service ID for PORT set pin mode */
#define PORT_SET_PIN_MODE_SID           (uint8)0x04
   
   
 /*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/*Invalid Port Pin ID requested*/
#define PORT_E_PARAM_PIN                (uint8)0x0A
 
/*Port Pin not configured as changeable*/
#define PORT_E_DIRECTION_UNCHANGEABLE   (uint8)0x0B
 
/*API Port_Init service called with wrong parameter*/
#define PORT_E_PARAM_CONFIG              (uint8)0x0C

/*API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_PARAM_INVALID_MODE              (uint8)0x0D

/*API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_MODE_UNCHANGEABLE              (uint8)0x0E
   
/*API service called without module initialization*/   
#define PORT_E_UNINIT              (uint8)0x0F

/*APIs called with a Null Pointer*/
#define PORT_E_PARAM_POINTER              (uint8)0x10
   
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/


   
/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;



/* Description: Enum to hold PIN Initial Mode */
typedef enum
{
	PORT_PIN_MODE_ADC,
	PORT_PIN_MODE_CAN,
	PORT_PIN_MODE_DIO,
	PORT_PIN_MODE_DIO_GPT,
	PORT_PIN_MODE_DIO_WDG,
	PORT_PIN_MODE_FLEXRAY,
	PORT_PIN_MODE_ICU,
	PORT_PIN_MODE_LIN,
	PORT_PIN_MODE_MEM,
	PORT_PIN_MODE_PWM,
	PORT_PIN_MODE_SPI
}Port_PinInitialMode;




/* Type definition for Port_configType used by the PORT APIs */
typedef uint8 Port_PinType;

/* Type definition for Port_configType used by the PORT APIs */
typedef uint8 Port_PortType;


/* Type definition for Port_configType used by the PORT APIs */
typedef uint8 Port_PinModeType;


/* Type definition for Port_configType used by the PORT APIs */
typedef boolean Port_PinDirectionChangeable;

/* Type definition for Port_configType used by the PORT APIs */
typedef boolean Port_PinModeChangeable;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

/* Description: Enum to hold Port pin level value for PIN */
typedef enum
{
    PORT_PIN_LEVEL_LOW,PORT_PIN_LEVEL_HIGH,NO_VALUE
}Port_PinLevelValue;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    Port_PortType port_num; 
    Port_PinType pin_num; 
    Port_PinDirectionType direction;
    Port_PinModeType mode;
    Port_InternalResistor resistor;
    uint8 initial_value;
    Port_PinDirectionChangeable pin_direction_changeable;
    Port_PinModeChangeable pin_mode_changeable;
}Port_ConfigChannel;


/* Data Structure required for initializing the PORT Driver */
typedef struct 
{
  Port_ConfigChannel Channels[PORTT_CONFIGURED_CHANNLES];
}Port_ConfigType;


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Description: Initializes the Port Driver module.*/  
 void Port_Init( const Port_ConfigType* ConfigPtr );

/* Description: Sets the port pin direction.*/
 #if (PORT_SET_PIN_DIRECTION_API == STD_ON)
 void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction );
#endif
 
/* Description: Refreshes port direction.*/   
 void Port_RefreshPortDirection( void );
      
/* Description: Returns the version information of this module.*/ 
 #if (PORT_VERSION_INFO_API == STD_ON)
 void Port_GetVersionInfo( Std_VersionInfoType* versioninfo );
#endif 
 
/* Description: Sets the port pin mode.*/
 #if (PORT_SET_PIN_MODE_API == STD_ON)
 void Port_SetPinMode( Port_PinType Pin, Port_PinModeType Mode );
#endif
 
/*Description: Function to Setup the pin configuration:*/
 void Port_SetupGpioPin(const Port_ConfigType *ConfigPtr );


/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/
/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;



#endif /* PORT_H */
