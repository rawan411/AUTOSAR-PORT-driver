 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Rawan Waleed Ahmed
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)

/* Pre-compile option for set pin direction API */
#define PORT_SET_PIN_DIRECTION_API           (STD_ON) 


/* Pre-compile option for set pin mode API */
#define PORT_SET_PIN_MODE_API                (STD_ON)

/* Number of the configured Port Channels */
#define PORTT_CONFIGURED_CHANNLES             (39U)
   
   
/* Channel Index in the array of structures in Port_PBcfg.c */
#define PortConf_PortA_Pin0_CHANNEL_ID_INDEX        (uint8)0x00
#define PortConf_PortA_Pin1_CHANNEL_ID_INDEX        (uint8)0x01
#define PortConf_PortA_Pin2_CHANNEL_ID_INDEX        (uint8)0x02
#define PortConf_PortA_Pin3_CHANNEL_ID_INDEX        (uint8)0x03
#define PortConf_PortA_Pin4_CHANNEL_ID_INDEX        (uint8)0x04
#define PortConf_PortA_Pin5_CHANNEL_ID_INDEX        (uint8)0x05
#define PortConf_PortA_Pin6_CHANNEL_ID_INDEX        (uint8)0x06
#define PortConf_PortA_Pin7_CHANNEL_ID_INDEX        (uint8)0x07

#define PortConf_PortB_Pin0_CHANNEL_ID_INDEX        (uint8)0x08
#define PortConf_PortB_Pin1_CHANNEL_ID_INDEX        (uint8)0x09
#define PortConf_PortB_Pin2_CHANNEL_ID_INDEX        (uint8)0x0A
#define PortConf_PortB_Pin3_CHANNEL_ID_INDEX        (uint8)0x0B
#define PortConf_PortB_Pin4_CHANNEL_ID_INDEX        (uint8)0x0C
#define PortConf_PortB_Pin5_CHANNEL_ID_INDEX        (uint8)0x0D
#define PortConf_PortB_Pin6_CHANNEL_ID_INDEX        (uint8)0x0E
#define PortConf_PortB_Pin7_CHANNEL_ID_INDEX        (uint8)0x0F


#define PortConf_PortC_Pin4_CHANNEL_ID_INDEX        (uint8)0x10
#define PortConf_PortC_Pin5_CHANNEL_ID_INDEX        (uint8)0x11
#define PortConf_PortC_Pin6_CHANNEL_ID_INDEX        (uint8)0x12
#define PortConf_PortC_Pin7_CHANNEL_ID_INDEX        (uint8)0x13


#define PortConf_PortD_Pin0_CHANNEL_ID_INDEX        (uint8)0x14
#define PortConf_PortD_Pin1_CHANNEL_ID_INDEX        (uint8)0x15
#define PortConf_PortD_Pin2_CHANNEL_ID_INDEX        (uint8)0x16
#define PortConf_PortD_Pin3_CHANNEL_ID_INDEX        (uint8)0x17
#define PortConf_PortD_Pin4_CHANNEL_ID_INDEX        (uint8)0x18
#define PortConf_PortD_Pin5_CHANNEL_ID_INDEX        (uint8)0x19
#define PortConf_PortD_Pin6_CHANNEL_ID_INDEX        (uint8)0x1A
#define PortConf_PortD_Pin7_CHANNEL_ID_INDEX        (uint8)0x1B

#define PortConf_PortE_Pin0_CHANNEL_ID_INDEX        (uint8)0x1C
#define PortConf_PortE_Pin1_CHANNEL_ID_INDEX        (uint8)0x1D
#define PortConf_PortE_Pin2_CHANNEL_ID_INDEX        (uint8)0x1E
#define PortConf_PortE_Pin3_CHANNEL_ID_INDEX        (uint8)0x1F
#define PortConf_PortE_Pin4_CHANNEL_ID_INDEX        (uint8)0x20
#define PortConf_PortE_Pin5_CHANNEL_ID_INDEX        (uint8)0x21

#define PortConf_PortF_Pin0_CHANNEL_ID_INDEX        (uint8)0x22
#define PortConf_PortF_Pin1_CHANNEL_ID_INDEX        (uint8)0x23
#define PortConf_PortF_Pin2_CHANNEL_ID_INDEX        (uint8)0x24
#define PortConf_PortF_Pin3_CHANNEL_ID_INDEX        (uint8)0x25
#define PortConf_PortF_Pin4_CHANNEL_ID_INDEX        (uint8)0x26


/* DIO Configured Port ID's  */
#define PortConf_PortA_Pin0_PORT_NUM                PORTA
#define PortConf_PortA_Pin1_PORT_NUM                PORTA
#define PortConf_PortA_Pin2_PORT_NUM                PORTA
#define PortConf_PortA_Pin3_PORT_NUM                PORTA
#define PortConf_PortA_Pin4_PORT_NUM                PORTA
#define PortConf_PortA_Pin5_PORT_NUM                PORTA
#define PortConf_PortA_Pin6_PORT_NUM                PORTA
#define PortConf_PortA_Pin7_PORT_NUM                PORTA

#define PortConf_PortB_Pin0_PORT_NUM                PORTB
#define PortConf_PortB_Pin1_PORT_NUM                PORTB
#define PortConf_PortB_Pin2_PORT_NUM                PORTB
#define PortConf_PortB_Pin3_PORT_NUM                PORTB
#define PortConf_PortB_Pin4_PORT_NUM                PORTB
#define PortConf_PortB_Pin5_PORT_NUM                PORTB
#define PortConf_PortB_Pin6_PORT_NUM                PORTB
#define PortConf_PortB_Pin7_PORT_NUM                PORTB

#define PortConf_PortC_Pin4_PORT_NUM                PORTC
#define PortConf_PortC_Pin5_PORT_NUM                PORTC
#define PortConf_PortC_Pin6_PORT_NUM                PORTC
#define PortConf_PortC_Pin7_PORT_NUM                PORTC

#define PortConf_PortD_Pin0_PORT_NUM                PORTD
#define PortConf_PortD_Pin1_PORT_NUM                PORTD
#define PortConf_PortD_Pin2_PORT_NUM                PORTD
#define PortConf_PortD_Pin3_PORT_NUM                PORTD
#define PortConf_PortD_Pin4_PORT_NUM                PORTD
#define PortConf_PortD_Pin5_PORT_NUM                PORTD
#define PortConf_PortD_Pin6_PORT_NUM                PORTD
#define PortConf_PortD_Pin7_PORT_NUM                PORTD

#define PortConf_PortE_Pin0_PORT_NUM                PORTE
#define PortConf_PortE_Pin1_PORT_NUM                PORTE
#define PortConf_PortE_Pin2_PORT_NUM                PORTE
#define PortConf_PortE_Pin3_PORT_NUM                PORTE
#define PortConf_PortE_Pin4_PORT_NUM                PORTE
#define PortConf_PortE_Pin5_PORT_NUM                PORTE

#define PortConf_PortF_Pin0_PORT_NUM                PORTF
#define PortConf_PortF_Pin1_PORT_NUM                PORTF
#define PortConf_PortF_Pin2_PORT_NUM                PORTF
#define PortConf_PortF_Pin3_PORT_NUM                PORTF
#define PortConf_PortF_Pin4_PORT_NUM                PORTF

/* DIO Configured Channel ID's */
#define PortConf_PortA_Pin0_PIN_NUM                  (Port_PinType)(0U) /* Pin 0 in PORTA */
#define PortConf_PortA_Pin1_PIN_NUM                  (Port_PinType)(1U) /* Pin 1 in PORTA */
#define PortConf_PortA_Pin2_PIN_NUM                  (Port_PinType)(2U) /* Pin 2 in PORTA */
#define PortConf_PortA_Pin3_PIN_NUM                  (Port_PinType)(3U) /* Pin 3 in PORTA */
#define PortConf_PortA_Pin4_PIN_NUM                  (Port_PinType)(4U) /* Pin 4 in PORTA */
#define PortConf_PortA_Pin5_PIN_NUM                  (Port_PinType)(5U) /* Pin 5 in PORTA */
#define PortConf_PortA_Pin6_PIN_NUM                  (Port_PinType)(6U) /* Pin 6 in PORTA */
#define PortConf_PortA_Pin7_PIN_NUM                  (Port_PinType)(7U) /* Pin 7 in PORTA */

#define PortConf_PortB_Pin0_PIN_NUM                  (Port_PinType)(0U) /* Pin 0 in PORTB */
#define PortConf_PortB_Pin1_PIN_NUM                  (Port_PinType)(1U) /* Pin 1 in PORTB */
#define PortConf_PortB_Pin2_PIN_NUM                  (Port_PinType)(2U) /* Pin 2 in PORTB */
#define PortConf_PortB_Pin3_PIN_NUM                  (Port_PinType)(3U) /* Pin 3 in PORTB */
#define PortConf_PortB_Pin4_PIN_NUM                  (Port_PinType)(4U) /* Pin 4 in PORTB */
#define PortConf_PortB_Pin5_PIN_NUM                  (Port_PinType)(5U) /* Pin 5 in PORTB */
#define PortConf_PortB_Pin6_PIN_NUM                  (Port_PinType)(6U) /* Pin 6 in PORTB */
#define PortConf_PortB_Pin7_PIN_NUM                  (Port_PinType)(7U) /* Pin 7 in PORTB */

#define PortConf_PortC_Pin4_PIN_NUM                  (Port_PinType)4 /* Pin 4 in PORTC */
#define PortConf_PortC_Pin5_PIN_NUM                  (Port_PinType)5 /* Pin 5 in PORTC */
#define PortConf_PortC_Pin6_PIN_NUM                  (Port_PinType)6 /* Pin 6 in PORTC */
#define PortConf_PortC_Pin7_PIN_NUM                  (Port_PinType)7 /* Pin 7 in PORTC */

#define PortConf_PortD_Pin0_PIN_NUM                  (Port_PinType)(0U) /* Pin 0 in PORTD */
#define PortConf_PortD_Pin1_PIN_NUM                  (Port_PinType)(1U) /* Pin 1 in PORTD */
#define PortConf_PortD_Pin2_PIN_NUM                  (Port_PinType)(2U) /* Pin 2 in PORTD */
#define PortConf_PortD_Pin3_PIN_NUM                  (Port_PinType)(3U) /* Pin 3 in PORTD */
#define PortConf_PortD_Pin4_PIN_NUM                  (Port_PinType)(4U) /* Pin 4 in PORTD */
#define PortConf_PortD_Pin5_PIN_NUM                  (Port_PinType)(5U) /* Pin 5 in PORTD */
#define PortConf_PortD_Pin6_PIN_NUM                  (Port_PinType)(6U) /* Pin 6 in PORTD */
#define PortConf_PortD_Pin7_PIN_NUM                  (Port_PinType)(7U) /* Pin 7 in PORTD */

#define PortConf_PortE_Pin0_PIN_NUM                  (Port_PinType)(0U) /* Pin 0 in PORTE */
#define PortConf_PortE_Pin1_PIN_NUM                  (Port_PinType)(1U) /* Pin 1 in PORTE */
#define PortConf_PortE_Pin2_PIN_NUM                  (Port_PinType)(2U) /* Pin 2 in PORTE */
#define PortConf_PortE_Pin3_PIN_NUM                  (Port_PinType)(3U) /* Pin 3 in PORTE */
#define PortConf_PortE_Pin4_PIN_NUM                  (Port_PinType)(4U) /* Pin 4 in PORTE */
#define PortConf_PortE_Pin5_PIN_NUM                  (Port_PinType)(5U) /* Pin 5 in PORTE */

#define PortConf_PortF_Pin0_PIN_NUM                  (Port_PinType)(0U) /* Pin 0 in PORTF */
#define PortConf_PortF_Pin1_PIN_NUM                  (Port_PinType)(1U) /* Pin 1 in PORTF */
#define PortConf_PortF_Pin2_PIN_NUM                  (Port_PinType)(2U) /* Pin 2 in PORTF */
#define PortConf_PortF_Pin3_PIN_NUM                  (Port_PinType)(3U) /* Pin 3 in PORTF */
#define PortConf_PortF_Pin4_PIN_NUM                  (Port_PinType)(4U) /* Pin 4 in PORTF */ 


/* DIO Configured Port direction  */
#define PortConf_PortA_Pin0_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin1_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin2_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin3_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin4_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin5_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin6_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortA_Pin7_PORT_DIR                PORT_PIN_OUT

#define PortConf_PortB_Pin0_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin1_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin2_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin3_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin4_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin5_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin6_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortB_Pin7_PORT_DIR                PORT_PIN_OUT

#define PortConf_PortC_Pin4_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortC_Pin5_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortC_Pin6_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortC_Pin7_PORT_DIR                PORT_PIN_OUT

#define PortConf_PortD_Pin0_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin1_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin2_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin3_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin4_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin5_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin6_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortD_Pin7_PORT_DIR                PORT_PIN_OUT

#define PortConf_PortE_Pin0_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortE_Pin1_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortE_Pin2_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortE_Pin3_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortE_Pin4_PORT_DIR                PORT_PIN_OUT
#define PortConf_PortE_Pin5_PORT_DIR                PORT_PIN_OUT

#define PortConf_PortF_Pin0_PORT_DIR                PORT_PIN_IN /* PF0 SW2 output  */
#define PortConf_PortF_Pin1_PORT_DIR                PORT_PIN_OUT  /* PF1 led1 output */
#define PortConf_PortF_Pin2_PORT_DIR                PORT_PIN_OUT  /* PF2 led2 output */
#define PortConf_PortF_Pin3_PORT_DIR                PORT_PIN_OUT  /* PF3 led3 output */
#define PortConf_PortF_Pin4_PORT_DIR                PORT_PIN_IN /* PF4 SW1 output  */


/* DIO Configured Port mode  */
#define PortConf_PortA_Pin0_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin1_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin2_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin3_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin4_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin5_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin6_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortA_Pin7_PORT_MODE                PORT_PIN_MODE_DIO

#define PortConf_PortB_Pin0_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin1_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin2_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin3_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin4_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin5_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin6_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortB_Pin7_PORT_MODE                PORT_PIN_MODE_DIO

#define PortConf_PortC_Pin4_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortC_Pin5_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortC_Pin6_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortC_Pin7_PORT_MODE                PORT_PIN_MODE_DIO

#define PortConf_PortD_Pin0_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin1_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin2_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin3_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin4_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin5_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin6_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortD_Pin7_PORT_MODE                PORT_PIN_MODE_DIO

#define PortConf_PortE_Pin0_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortE_Pin1_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortE_Pin2_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortE_Pin3_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortE_Pin4_PORT_MODE                PORT_PIN_MODE_DIO
#define PortConf_PortE_Pin5_PORT_MODE                PORT_PIN_MODE_DIO

#define PortConf_PortF_Pin0_PORT_MODE                PORT_PIN_MODE_DIO  /* PF0 SW2 DIO  */
#define PortConf_PortF_Pin1_PORT_MODE                PORT_PIN_MODE_DIO  /* PF1 led1 DIO */
#define PortConf_PortF_Pin2_PORT_MODE                PORT_PIN_MODE_DIO  /* PF2 led2 DIO */
#define PortConf_PortF_Pin3_PORT_MODE                PORT_PIN_MODE_DIO  /* PF3 led3 DIO */
#define PortConf_PortF_Pin4_PORT_MODE                PORT_PIN_MODE_DIO  /* PF4 SW1 DIO  */


/* DIO Configured Port Internal Resistor  */
#define PortConf_PortA_Pin0_PORT_RES                OFF
#define PortConf_PortA_Pin1_PORT_RES                OFF
#define PortConf_PortA_Pin2_PORT_RES                OFF
#define PortConf_PortA_Pin3_PORT_RES                OFF
#define PortConf_PortA_Pin4_PORT_RES                OFF
#define PortConf_PortA_Pin5_PORT_RES                OFF
#define PortConf_PortA_Pin6_PORT_RES                OFF
#define PortConf_PortA_Pin7_PORT_RES                OFF

#define PortConf_PortB_Pin0_PORT_RES                OFF
#define PortConf_PortB_Pin1_PORT_RES                OFF
#define PortConf_PortB_Pin2_PORT_RES                OFF
#define PortConf_PortB_Pin3_PORT_RES                OFF
#define PortConf_PortB_Pin4_PORT_RES                OFF
#define PortConf_PortB_Pin5_PORT_RES                OFF
#define PortConf_PortB_Pin6_PORT_RES                OFF
#define PortConf_PortB_Pin7_PORT_RES                OFF

#define PortConf_PortC_Pin4_PORT_RES                OFF
#define PortConf_PortC_Pin5_PORT_RES                OFF
#define PortConf_PortC_Pin6_PORT_RES                OFF
#define PortConf_PortC_Pin7_PORT_RES                OFF

#define PortConf_PortD_Pin0_PORT_RES                OFF
#define PortConf_PortD_Pin1_PORT_RES                OFF
#define PortConf_PortD_Pin2_PORT_RES                OFF
#define PortConf_PortD_Pin3_PORT_RES                OFF
#define PortConf_PortD_Pin4_PORT_RES                OFF
#define PortConf_PortD_Pin5_PORT_RES                OFF
#define PortConf_PortD_Pin6_PORT_RES                OFF
#define PortConf_PortD_Pin7_PORT_RES                OFF

#define PortConf_PortE_Pin0_PORT_RES                OFF
#define PortConf_PortE_Pin1_PORT_RES                OFF
#define PortConf_PortE_Pin2_PORT_RES                OFF
#define PortConf_PortE_Pin3_PORT_RES                OFF
#define PortConf_PortE_Pin4_PORT_RES                OFF
#define PortConf_PortE_Pin5_PORT_RES                OFF

#define PortConf_PortF_Pin0_PORT_RES                PULL_UP  /* PF0 SW2 pullup  */
#define PortConf_PortF_Pin1_PORT_RES                OFF      /* PF1 led1 input */
#define PortConf_PortF_Pin2_PORT_RES                OFF      /* PF2 led2 input */
#define PortConf_PortF_Pin3_PORT_RES                OFF      /* PF3 led3 input */
#define PortConf_PortF_Pin4_PORT_RES                PULL_UP  /* PF4 SW1 pullup  */

/* DIO Configured Port initial value  */
#define PortConf_PortA_Pin0_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin1_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin2_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin3_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin4_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin5_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin6_PORT_VALUE                NO_VALUE
#define PortConf_PortA_Pin7_PORT_VALUE                NO_VALUE

#define PortConf_PortB_Pin0_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin1_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin2_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin3_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin4_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin5_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin6_PORT_VALUE                NO_VALUE
#define PortConf_PortB_Pin7_PORT_VALUE                NO_VALUE

#define PortConf_PortC_Pin4_PORT_VALUE                NO_VALUE
#define PortConf_PortC_Pin5_PORT_VALUE                NO_VALUE
#define PortConf_PortC_Pin6_PORT_VALUE                NO_VALUE
#define PortConf_PortC_Pin7_PORT_VALUE                NO_VALUE

#define PortConf_PortD_Pin0_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin1_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin2_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin3_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin4_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin5_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin6_PORT_VALUE                NO_VALUE
#define PortConf_PortD_Pin7_PORT_VALUE                NO_VALUE

#define PortConf_PortE_Pin0_PORT_VALUE                NO_VALUE
#define PortConf_PortE_Pin1_PORT_VALUE                NO_VALUE
#define PortConf_PortE_Pin2_PORT_VALUE                NO_VALUE
#define PortConf_PortE_Pin3_PORT_VALUE                NO_VALUE
#define PortConf_PortE_Pin4_PORT_VALUE                NO_VALUE
#define PortConf_PortE_Pin5_PORT_VALUE                NO_VALUE

#define PortConf_PortF_Pin0_PORT_VALUE                PORT_PIN_LEVEL_LOW           /* PF0 SW2 pullup  */
#define PortConf_PortF_Pin1_PORT_VALUE                PORT_PIN_LEVEL_LOW /* PF1 led1 low */
#define PortConf_PortF_Pin2_PORT_VALUE                PORT_PIN_LEVEL_LOW /* PF2 led2 low */
#define PortConf_PortF_Pin3_PORT_VALUE                PORT_PIN_LEVEL_LOW /* PF3 led3 low */
#define PortConf_PortF_Pin4_PORT_VALUE                PORT_PIN_LEVEL_LOW           /* PF4 SW1 pullup  */

/* DIO Configured Pin Direction Changeable */
#define PortConf_PortA_Pin0_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin1_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin2_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin3_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin4_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin5_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin6_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortA_Pin7_PORT_DIR_CHANGEABLE                FALSE

#define PortConf_PortB_Pin0_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin1_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin2_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin3_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin4_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin5_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin6_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortB_Pin7_PORT_DIR_CHANGEABLE                FALSE

#define PortConf_PortC_Pin4_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortC_Pin5_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortC_Pin6_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortC_Pin7_PORT_DIR_CHANGEABLE                FALSE

#define PortConf_PortD_Pin0_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin1_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin2_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin3_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin4_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin5_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin6_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortD_Pin7_PORT_DIR_CHANGEABLE                FALSE

#define PortConf_PortE_Pin0_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortE_Pin1_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortE_Pin2_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortE_Pin3_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortE_Pin4_PORT_DIR_CHANGEABLE                FALSE
#define PortConf_PortE_Pin5_PORT_DIR_CHANGEABLE                FALSE

#define PortConf_PortF_Pin0_PORT_DIR_CHANGEABLE                FALSE           
#define PortConf_PortF_Pin1_PORT_DIR_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin2_PORT_DIR_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin3_PORT_DIR_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin4_PORT_DIR_CHANGEABLE                FALSE     

/* DIO Configured Pin Mode Changeable*/
#define PortConf_PortA_Pin0_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin1_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin2_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin3_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin4_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin5_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin6_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortA_Pin7_PORT_MODE_CHANGEABLE                FALSE

#define PortConf_PortB_Pin0_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin1_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin2_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin3_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin4_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin5_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin6_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortB_Pin7_PORT_MODE_CHANGEABLE                FALSE

#define PortConf_PortC_Pin4_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortC_Pin5_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortC_Pin6_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortC_Pin7_PORT_MODE_CHANGEABLE                FALSE

#define PortConf_PortD_Pin0_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin1_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin2_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin3_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin4_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin5_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin6_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortD_Pin7_PORT_MODE_CHANGEABLE                FALSE

#define PortConf_PortE_Pin0_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortE_Pin1_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortE_Pin2_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortE_Pin3_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortE_Pin4_PORT_MODE_CHANGEABLE                FALSE
#define PortConf_PortE_Pin5_PORT_MODE_CHANGEABLE                FALSE

#define PortConf_PortF_Pin0_PORT_MODE_CHANGEABLE                FALSE           
#define PortConf_PortF_Pin1_PORT_MODE_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin2_PORT_MODE_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin3_PORT_MODE_CHANGEABLE                FALSE 
#define PortConf_PortF_Pin4_PORT_MODE_CHANGEABLE                FALSE  

#endif /* PORT_CFG_H */