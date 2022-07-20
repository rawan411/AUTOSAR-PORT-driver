 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Rawan Waleed
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif
   
   
   
/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
                                             PortConf_PortA_Pin0_PORT_NUM,PortConf_PortA_Pin0_PIN_NUM,PortConf_PortA_Pin0_PORT_DIR,PortConf_PortA_Pin0_PORT_MODE,PortConf_PortA_Pin0_PORT_RES,PortConf_PortA_Pin0_PORT_VALUE,PortConf_PortA_Pin0_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin0_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin1_PORT_NUM,PortConf_PortA_Pin1_PIN_NUM,PortConf_PortA_Pin1_PORT_DIR,PortConf_PortA_Pin1_PORT_MODE,PortConf_PortA_Pin1_PORT_RES,PortConf_PortA_Pin1_PORT_VALUE,PortConf_PortA_Pin1_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin1_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin2_PORT_NUM,PortConf_PortA_Pin2_PIN_NUM,PortConf_PortA_Pin2_PORT_DIR,PortConf_PortA_Pin2_PORT_MODE,PortConf_PortA_Pin2_PORT_RES,PortConf_PortA_Pin2_PORT_VALUE,PortConf_PortA_Pin2_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin2_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin3_PORT_NUM,PortConf_PortA_Pin3_PIN_NUM,PortConf_PortA_Pin3_PORT_DIR,PortConf_PortA_Pin3_PORT_MODE,PortConf_PortA_Pin3_PORT_RES,PortConf_PortA_Pin3_PORT_VALUE,PortConf_PortA_Pin3_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin3_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin4_PORT_NUM,PortConf_PortA_Pin4_PIN_NUM,PortConf_PortA_Pin4_PORT_DIR,PortConf_PortA_Pin4_PORT_MODE,PortConf_PortA_Pin4_PORT_RES,PortConf_PortA_Pin4_PORT_VALUE,PortConf_PortA_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin4_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin5_PORT_NUM,PortConf_PortA_Pin5_PIN_NUM,PortConf_PortA_Pin5_PORT_DIR,PortConf_PortA_Pin5_PORT_MODE,PortConf_PortA_Pin5_PORT_RES,PortConf_PortA_Pin5_PORT_VALUE,PortConf_PortA_Pin5_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin5_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin6_PORT_NUM,PortConf_PortA_Pin6_PIN_NUM,PortConf_PortA_Pin6_PORT_DIR,PortConf_PortA_Pin6_PORT_MODE,PortConf_PortA_Pin6_PORT_RES,PortConf_PortA_Pin6_PORT_VALUE,PortConf_PortA_Pin6_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin6_PORT_MODE_CHANGEABLE,
                                             PortConf_PortA_Pin7_PORT_NUM,PortConf_PortA_Pin7_PIN_NUM,PortConf_PortA_Pin7_PORT_DIR,PortConf_PortA_Pin7_PORT_MODE,PortConf_PortA_Pin7_PORT_RES,PortConf_PortA_Pin7_PORT_VALUE,PortConf_PortA_Pin7_PORT_DIR_CHANGEABLE,PortConf_PortA_Pin7_PORT_MODE_CHANGEABLE,
                                             
                                             PortConf_PortB_Pin0_PORT_NUM,PortConf_PortB_Pin0_PIN_NUM,PortConf_PortB_Pin0_PORT_DIR,PortConf_PortB_Pin0_PORT_MODE,PortConf_PortB_Pin0_PORT_RES,PortConf_PortB_Pin0_PORT_VALUE,PortConf_PortB_Pin0_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin0_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin1_PORT_NUM,PortConf_PortB_Pin1_PIN_NUM,PortConf_PortB_Pin1_PORT_DIR,PortConf_PortB_Pin1_PORT_MODE,PortConf_PortB_Pin1_PORT_RES,PortConf_PortB_Pin1_PORT_VALUE,PortConf_PortB_Pin1_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin1_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin2_PORT_NUM,PortConf_PortB_Pin2_PIN_NUM,PortConf_PortB_Pin2_PORT_DIR,PortConf_PortB_Pin2_PORT_MODE,PortConf_PortB_Pin2_PORT_RES,PortConf_PortB_Pin2_PORT_VALUE,PortConf_PortB_Pin2_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin2_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin3_PORT_NUM,PortConf_PortB_Pin3_PIN_NUM,PortConf_PortB_Pin3_PORT_DIR,PortConf_PortB_Pin3_PORT_MODE,PortConf_PortB_Pin3_PORT_RES,PortConf_PortB_Pin3_PORT_VALUE,PortConf_PortB_Pin3_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin3_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin4_PORT_NUM,PortConf_PortB_Pin4_PIN_NUM,PortConf_PortB_Pin4_PORT_DIR,PortConf_PortB_Pin4_PORT_MODE,PortConf_PortB_Pin4_PORT_RES,PortConf_PortB_Pin4_PORT_VALUE,PortConf_PortB_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin4_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin5_PORT_NUM,PortConf_PortB_Pin5_PIN_NUM,PortConf_PortB_Pin5_PORT_DIR,PortConf_PortB_Pin5_PORT_MODE,PortConf_PortB_Pin5_PORT_RES,PortConf_PortB_Pin5_PORT_VALUE,PortConf_PortB_Pin5_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin5_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin6_PORT_NUM,PortConf_PortB_Pin6_PIN_NUM,PortConf_PortB_Pin6_PORT_DIR,PortConf_PortB_Pin6_PORT_MODE,PortConf_PortB_Pin6_PORT_RES,PortConf_PortB_Pin6_PORT_VALUE,PortConf_PortB_Pin6_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin6_PORT_MODE_CHANGEABLE,
                                             PortConf_PortB_Pin7_PORT_NUM,PortConf_PortB_Pin7_PIN_NUM,PortConf_PortB_Pin7_PORT_DIR,PortConf_PortB_Pin7_PORT_MODE,PortConf_PortB_Pin7_PORT_RES,PortConf_PortB_Pin7_PORT_VALUE,PortConf_PortB_Pin7_PORT_DIR_CHANGEABLE,PortConf_PortB_Pin7_PORT_MODE_CHANGEABLE,
                                             
                                             PortConf_PortC_Pin4_PORT_NUM,PortConf_PortC_Pin4_PIN_NUM,PortConf_PortC_Pin4_PORT_DIR,PortConf_PortC_Pin4_PORT_MODE,PortConf_PortC_Pin4_PORT_RES,PortConf_PortC_Pin4_PORT_VALUE,PortConf_PortC_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortC_Pin4_PORT_MODE_CHANGEABLE,
                                             PortConf_PortC_Pin5_PORT_NUM,PortConf_PortC_Pin5_PIN_NUM,PortConf_PortC_Pin5_PORT_DIR,PortConf_PortC_Pin5_PORT_MODE,PortConf_PortC_Pin5_PORT_RES,PortConf_PortC_Pin5_PORT_VALUE,PortConf_PortC_Pin5_PORT_DIR_CHANGEABLE,PortConf_PortC_Pin5_PORT_MODE_CHANGEABLE,
                                             PortConf_PortC_Pin6_PORT_NUM,PortConf_PortC_Pin6_PIN_NUM,PortConf_PortC_Pin6_PORT_DIR,PortConf_PortC_Pin6_PORT_MODE,PortConf_PortC_Pin6_PORT_RES,PortConf_PortC_Pin6_PORT_VALUE,PortConf_PortC_Pin6_PORT_DIR_CHANGEABLE,PortConf_PortC_Pin6_PORT_MODE_CHANGEABLE,
                                             PortConf_PortC_Pin7_PORT_NUM,PortConf_PortC_Pin7_PIN_NUM,PortConf_PortC_Pin7_PORT_DIR,PortConf_PortC_Pin7_PORT_MODE,PortConf_PortC_Pin7_PORT_RES,PortConf_PortC_Pin7_PORT_VALUE,PortConf_PortC_Pin7_PORT_DIR_CHANGEABLE,PortConf_PortC_Pin7_PORT_MODE_CHANGEABLE,
                                             
                                             PortConf_PortD_Pin0_PORT_NUM,PortConf_PortD_Pin0_PIN_NUM,PortConf_PortD_Pin0_PORT_DIR,PortConf_PortD_Pin0_PORT_MODE,PortConf_PortD_Pin0_PORT_RES,PortConf_PortD_Pin0_PORT_VALUE,PortConf_PortD_Pin0_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin0_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin1_PORT_NUM,PortConf_PortD_Pin1_PIN_NUM,PortConf_PortD_Pin1_PORT_DIR,PortConf_PortD_Pin1_PORT_MODE,PortConf_PortD_Pin1_PORT_RES,PortConf_PortD_Pin1_PORT_VALUE,PortConf_PortD_Pin1_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin1_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin2_PORT_NUM,PortConf_PortD_Pin2_PIN_NUM,PortConf_PortD_Pin2_PORT_DIR,PortConf_PortD_Pin2_PORT_MODE,PortConf_PortD_Pin2_PORT_RES,PortConf_PortD_Pin2_PORT_VALUE,PortConf_PortD_Pin2_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin2_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin3_PORT_NUM,PortConf_PortD_Pin3_PIN_NUM,PortConf_PortD_Pin3_PORT_DIR,PortConf_PortD_Pin3_PORT_MODE,PortConf_PortD_Pin3_PORT_RES,PortConf_PortD_Pin3_PORT_VALUE,PortConf_PortD_Pin3_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin3_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin4_PORT_NUM,PortConf_PortD_Pin4_PIN_NUM,PortConf_PortD_Pin4_PORT_DIR,PortConf_PortD_Pin4_PORT_MODE,PortConf_PortD_Pin4_PORT_RES,PortConf_PortD_Pin4_PORT_VALUE,PortConf_PortD_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin4_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin5_PORT_NUM,PortConf_PortD_Pin5_PIN_NUM,PortConf_PortD_Pin5_PORT_DIR,PortConf_PortD_Pin5_PORT_MODE,PortConf_PortD_Pin5_PORT_RES,PortConf_PortD_Pin5_PORT_VALUE,PortConf_PortD_Pin5_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin5_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin6_PORT_NUM,PortConf_PortD_Pin6_PIN_NUM,PortConf_PortD_Pin6_PORT_DIR,PortConf_PortD_Pin6_PORT_MODE,PortConf_PortD_Pin6_PORT_RES,PortConf_PortD_Pin6_PORT_VALUE,PortConf_PortD_Pin6_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin6_PORT_MODE_CHANGEABLE,
                                             PortConf_PortD_Pin7_PORT_NUM,PortConf_PortD_Pin7_PIN_NUM,PortConf_PortD_Pin7_PORT_DIR,PortConf_PortD_Pin7_PORT_MODE,PortConf_PortD_Pin7_PORT_RES,PortConf_PortD_Pin7_PORT_VALUE,PortConf_PortD_Pin7_PORT_DIR_CHANGEABLE,PortConf_PortD_Pin7_PORT_MODE_CHANGEABLE,
                                             
                                             PortConf_PortE_Pin0_PORT_NUM,PortConf_PortE_Pin0_PIN_NUM,PortConf_PortE_Pin0_PORT_DIR,PortConf_PortE_Pin0_PORT_MODE,PortConf_PortE_Pin0_PORT_RES,PortConf_PortE_Pin0_PORT_VALUE,PortConf_PortE_Pin0_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin0_PORT_MODE_CHANGEABLE,
                                             PortConf_PortE_Pin1_PORT_NUM,PortConf_PortE_Pin1_PIN_NUM,PortConf_PortE_Pin1_PORT_DIR,PortConf_PortE_Pin1_PORT_MODE,PortConf_PortE_Pin1_PORT_RES,PortConf_PortE_Pin1_PORT_VALUE,PortConf_PortE_Pin1_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin1_PORT_MODE_CHANGEABLE,
                                             PortConf_PortE_Pin2_PORT_NUM,PortConf_PortE_Pin2_PIN_NUM,PortConf_PortE_Pin2_PORT_DIR,PortConf_PortE_Pin2_PORT_MODE,PortConf_PortE_Pin2_PORT_RES,PortConf_PortE_Pin2_PORT_VALUE,PortConf_PortE_Pin2_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin2_PORT_MODE_CHANGEABLE,
                                             PortConf_PortE_Pin3_PORT_NUM,PortConf_PortE_Pin3_PIN_NUM,PortConf_PortE_Pin3_PORT_DIR,PortConf_PortE_Pin3_PORT_MODE,PortConf_PortE_Pin3_PORT_RES,PortConf_PortE_Pin3_PORT_VALUE,PortConf_PortE_Pin3_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin3_PORT_MODE_CHANGEABLE,
                                             PortConf_PortE_Pin4_PORT_NUM,PortConf_PortE_Pin4_PIN_NUM,PortConf_PortE_Pin4_PORT_DIR,PortConf_PortE_Pin4_PORT_MODE,PortConf_PortE_Pin4_PORT_RES,PortConf_PortE_Pin4_PORT_VALUE,PortConf_PortE_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin4_PORT_MODE_CHANGEABLE,
                                             PortConf_PortE_Pin5_PORT_NUM,PortConf_PortE_Pin5_PIN_NUM,PortConf_PortE_Pin5_PORT_DIR,PortConf_PortE_Pin5_PORT_MODE,PortConf_PortE_Pin5_PORT_RES,PortConf_PortE_Pin5_PORT_VALUE,PortConf_PortE_Pin5_PORT_DIR_CHANGEABLE,PortConf_PortE_Pin5_PORT_MODE_CHANGEABLE,
                                             
                                             PortConf_PortF_Pin0_PORT_NUM,PortConf_PortF_Pin0_PIN_NUM,PortConf_PortF_Pin0_PORT_DIR,PortConf_PortF_Pin0_PORT_MODE,PortConf_PortF_Pin0_PORT_RES,PortConf_PortF_Pin0_PORT_VALUE,PortConf_PortF_Pin0_PORT_DIR_CHANGEABLE,PortConf_PortF_Pin0_PORT_MODE_CHANGEABLE,
                                             PortConf_PortF_Pin1_PORT_NUM,PortConf_PortF_Pin1_PIN_NUM,PortConf_PortF_Pin1_PORT_DIR,PortConf_PortF_Pin1_PORT_MODE,PortConf_PortF_Pin1_PORT_RES,PortConf_PortF_Pin1_PORT_VALUE,PortConf_PortF_Pin1_PORT_DIR_CHANGEABLE,PortConf_PortF_Pin1_PORT_MODE_CHANGEABLE,
                                             PortConf_PortF_Pin2_PORT_NUM,PortConf_PortF_Pin2_PIN_NUM,PortConf_PortF_Pin2_PORT_DIR,PortConf_PortF_Pin2_PORT_MODE,PortConf_PortF_Pin2_PORT_RES,PortConf_PortF_Pin2_PORT_VALUE,PortConf_PortF_Pin2_PORT_DIR_CHANGEABLE,PortConf_PortF_Pin2_PORT_MODE_CHANGEABLE,
                                             PortConf_PortF_Pin3_PORT_NUM,PortConf_PortF_Pin3_PIN_NUM,PortConf_PortF_Pin3_PORT_DIR,PortConf_PortF_Pin3_PORT_MODE,PortConf_PortF_Pin3_PORT_RES,PortConf_PortF_Pin3_PORT_VALUE,PortConf_PortF_Pin3_PORT_DIR_CHANGEABLE,PortConf_PortF_Pin3_PORT_MODE_CHANGEABLE,
                                             PortConf_PortF_Pin4_PORT_NUM,PortConf_PortF_Pin4_PIN_NUM,PortConf_PortF_Pin4_PORT_DIR,PortConf_PortF_Pin4_PORT_MODE,PortConf_PortF_Pin4_PORT_RES,PortConf_PortF_Pin4_PORT_VALUE,PortConf_PortF_Pin4_PORT_DIR_CHANGEABLE,PortConf_PortF_Pin4_PORT_MODE_CHANGEABLE
                                             
				         };