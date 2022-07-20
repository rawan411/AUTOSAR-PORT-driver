 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_REG.h
 *
 * Description: Register file - Port Driver.
 *
 * Author: Rawan Waleed Ahmed
 ******************************************************************************/


#ifndef PORT_REG_H
#define PORT_REG_H

#include "Std_Types.h"

/* Id for the company in the AUTOSAR */
#define PORT_REG_VENDOR_ID                                  (1000U)

/* Dio Module Id */
#define PORT_MODULE_ID    (124U)

/* Dio Instance Id */
#define PORT_INSTANCE_ID  (0U)
/*
 * Module Version 1.0.0
 */
#define PORT_REG_SW_MAJOR_VERSION                           (1U)
#define PORT_REG_SW_MINOR_VERSION                           (0U)
#define PORT_REG_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_REG_AR_RELEASE_MAJOR_VERSION                   (4U)
#define PORT_REG_AR_RELEASE_MINOR_VERSION                   (0U)
#define PORT_REG_AR_RELEASE_PATCH_VERSION                   (3U)


/*******************************************************************************
 *                              Port Registers Definitions                     *
 *******************************************************************************/

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))



#endif /* PORT_REG_H */
