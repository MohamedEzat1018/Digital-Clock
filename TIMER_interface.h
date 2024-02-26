/*
 * TIMER_interface.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Mohamed Ezzat
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_
/*****************************************************************/
/***********************PUBLIC MACROS****************************/
/***************************************************************/

/* MODE MACROS */
#define TIMER_NORMAL_MODE                          0
#define TIMER_PWM_PHASE_CORRECT_MODE               1
#define TIMER_CTC_MODE                             2
#define TIMER_FAST_PWM_MODE                        3


/* PRESCALER MACROS */
#define TIMER_NO_CLOCK_SOURCE                      0
#define TIMER_NO_PRESCALER_FACTOR                  1
#define TIMER_DIVISION_FACTOR_8                    2
#define TIMER_DIVISION_FACTOR_64                   3
#define TIMER_DIVISION_FACTOR_256                  4
#define TIMER_DIVISION_FACTOR_1024                 5
#define TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_FALLING  6
#define TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_RISING   7

/* TIMER2 Prescaler */
#define TIMER2_NO_CLOCK_SOURCE                     0
#define TIMER2_NO_PRESCALER_FACTOR                 1
#define TIMER2_DIVISION_FACTOR_8                   2
#define TIMER2_DIVISION_FACTOR_32                   3
#define TIMER2_DIVISION_FACTOR_64                  4
#define TIMER2_DIVISION_FACTOR_128                 5
#define TIMER2_DIVISION_FACTOR_256                 6
#define TIMER2_DIVISION_FACTOR_1024                7

/* TIMER1 MODE */
#define TIMER1_NORMAL_MODE                         0
#define TIMER1_PWM_PHASE_CORRECT_8_BIT_MODE	       1
#define TIMER1_PWM_PHASE_CORRECT_9_BIT_MODE        2
#define TIMER1_PWM_PHASE_CORRECT_10_BIT_MODE       3
#define TIMER1_CTC_OCR1A_MODE                      4
#define TIMER1_FAST_PWM_8_BIT_MODE                 5
#define TIMER1_FAST_PWM_9_BIT_MODE                 6
#define TIMER1_FAST_PWM_10_BIT_MODE                7
#define TIMER1_PHASE_FREQUENCY_CORRECT_ICR1_MODE   8
#define TIMER1_PHASE_FREQUENCY_CORRECT_OCR1A_MODE  9
#define TIMER1_PWM_PHASE_CORRECT_ICR1_MODE         10
#define TIMER1_PWM_PHASE_CORRECT_OCR1A_MODE        11
#define TIMER1_CTC_ICR1_MODE                       12
#define TIMER1_FAST_PWM_ICR1_MODE                  14
#define TIMER1_FAST_PWM_OCR1A_MODE                 15

/* PWM TYPES MACROS */
#define TIMER_PWM_INVERTING_TYPE                   0
#define TIMER_PWM_NON_INVERTING_TYPE               1


/* ICU EDGE MACROS */
#define TIMER_ICU_FALLING_EDGE                     0
#define TIMER_ICU_RISING_EDGE                      1

/* WDT PRESCALERS MACROS*/
#define WDT_PRESCALE_16_3_MS                       0
#define WDT_PRESCALE_32_5_MS                       1
#define WDT_PRESCALE_65_MS                         2
#define WDT_PRESCALE_0_13_S                        3
#define WDT_PRESCALE_0_26_S                        4
#define WDT_PRESCALE_0_52_S                        5
#define WDT_PRESCALE_1_0_S                         6
#define WDT_PRESCALE_2_1_S                         7

/* TIMER INTERRUPT VACTOR IDS */
#define TIMER0_OVF_VECTOR                          0
#define TIMER0_CTC_VECTOR                          1
#define TIMER1_OVF_VECTOR                          2
#define TIMER1_CTCA_VECTOR                         3
#define TIMER1_CTCB_VECTOR                         4
#define TIMER1_ICU_VECTOR                          5
#define TIMER2_OVF_VECTOR                          6
#define TIMER2_CTC_VECTOR                          7


/****************************************************************/
/*********************PUBLIC FUNCTIONS**************************/
/**************************************************************/

/***********************************************************************************************************************************/
/*****************************************************TIMER0************************************************************************/
/***********************************************************************************************************************************/

/* DECRIPTION : This Function For Initialization TIMER0 According To The Configuration File
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER0_voidInit();

/* DECRIPTION : This Function For Set TIMER0 Waveform Generation Mode
 * INPUT      : u8 , Range: 0~255 [TIMER_NORMAL_MODE , TIMER_CTC_MODE , TIMER_FAST_PWM_MODE , TIMER_PWM_PHASE_CORRECT_MODE]
 * RETURN     : void
 **************************************************************************************************************************/
void TIMER0_voidSetMode(u8 u8Mode);

/* DECRIPTION : This Function For Set TIMER0 PreLoad Value
 * INPUT      : u8 , Range: 0~255
 * RETURN     : void
 ***********************************************************/
void TIMER0_voidSetPreLoad(u8 u8PreLoad);

/* DECRIPTION : This Function For Set TIMER0 Compare Match Value
 * INPUT      : u8 , Range: 0~255
 * RETURN     : void
 ***********************************************************/
void TIMER0_voidSetCTC(u8 u8CM);

/* DECRIPTION : This Function For Enable TIMER0 And Set Clock PreScaler
 * INPUT      : u8 , Range: 0~255 [ TIMER_NO_PRESCALER_FACTOR , TIMER_DIVISION_FACTOR_8 , TIMER_DIVISION_FACTOR_64 ,
 *                                  TIMER_DIVISION_FACTOR_256 , TIMER_DIVISION_FACTOR_1024 ,
 *                                  TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_FALLING ,
 *                                  TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_FALLING ]
 * RETURN     : void
 *********************************************************************************************************************/
void TIMER0_voidEnable(u8 u8PreScaler);

/* DECRIPTION : This Function For Disable TIMER0
 * INPUT      : void
 * RETURN     : void
 ***********************************************/
void TIMER0_voidDisable();

/* DECRIPTION : This Function For Get TIMER0 Counter Register Value
 * INPUT      : void
 * RETURN     : u8 , Range: 0~255
 ******************************************************************/
u8 TIMER0_u8GetTIMER0CounterVal();

/* DECRIPTION : This Function For Set TIMER0 PWM DutyCycle
 * INPUT      : u8DC      , Range: 0~255 [ 0~100 ]
 *              u8PwmType , Range: 0~255 [ PWM_INVERTING_TYPE , PWM_NON_INVERTING_TYPE]
 * RETURN     : void
 ***********************************************************/
void TIMER0_voidSetPWMDutayCycle(u8 u8DC , u8 u8PwmType);




/***********************************************************************************************************************************/
/*****************************************************TIMER1************************************************************************/
/***********************************************************************************************************************************/

/* DECRIPTION : This Function For Initialization TIMER1 According To The Configuration File
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER1_voidInit();

/* DECRIPTION : This Function For Set TIMER1 Waveform Generation Mode
 * INPUT      : u8 , Range: 0~255 [TIMER_NORMAL_MODE , TIMER_CTC_MODE , TIMER_FAST_PWM_MODE , TIMER_PWM_PHASE_CORRECT_MODE]
 * RETURN     : void
 **************************************************************************************************************************/
void TIMER1_voidSetMode(u8 u8Mode);

/* DECRIPTION : This Function For Set TIMER1 PreLoad Value
 * INPUT      : u16 , Range: 0~65536
 * RETURN     : void
 ***********************************************************/
void TIMER1_voidSetPreLoad(u16 u16PreLoad);

/* DECRIPTION : This Function For Set TIMER1 Compare Match Value for CTCA
 * INPUT      : u16 , Range: 0~65536
 * RETURN     : void
 ***************************************************************************/
void TIMER1_voidSetCTCA(u16 u16CMA);

/* DECRIPTION : This Function For Set TIMER1 Compare Match Value for CTCB
 * INPUT      : u16 , Range: 0~65536
 * RETURN     : void
 ***************************************************************************/
void TIMER1_voidSetCTCB(u16 u16CMB);

/* DECRIPTION : This Function For Set TIMER1 Compare Match Value for ICR1
 * INPUT      : u16 , Range: 0~65536
 * RETURN     : void
 ***************************************************************************/
void TIMER1_voidSetICR1(u16 u16ICR1);

/* DECRIPTION : This Function For Enable TIMER1 And Set Clock PreScaler
 * INPUT      : u8 , Range: 0~255 [ TIMER_NO_PRESCALER_FACTOR , TIMER_DIVISION_FACTOR_8   , TIMER_DIVISION_FACTOR_64 ,
 *                                  TIMER_DIVISION_FACTOR_256  , TIMER_DIVISION_FACTOR_1024 ,
 *                                  TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_FALLING ,
 *                                  TIMER_EXTERNAL_CLOCK_SOURCE_ON_T0_FALLING ]
 * RETURN     : void
 *********************************************************************************************************************/
void TIMER1_voidEnable(u8 u8PreScaler);

/* DECRIPTION : This Function For Disable TIMER1
 * INPUT      : void
 * RETURN     : void
 ***********************************************/
void TIMER1_voidDisable();

/* DECRIPTION : This Function For Get TIMER1 Counter Register Value
 * INPUT      : void
 * RETURN     : u8 , Range: 0~255
 ******************************************************************/
u16 TIMER1_u16GetTIMER1CounterVal();




/***********************************************************************************************************************************/
/*****************************************************TIMER2************************************************************************/
/***********************************************************************************************************************************/


/* DECRIPTION : This Function For Initialization TIMER2 According To The Configuration File
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER2_voidInit();

/* DECRIPTION : This Function For Set TIMER2 Waveform Generation Mode
 * INPUT      : u8 , Range: 0~255 [TIMER_NORMAL_MODE , TIMER_CTC_MODE , TIMER_FAST_PWM_MODE , TIMER_PWM_PHASE_CORRECT_MODE]
 * RETURN     : void
 **************************************************************************************************************************/
void TIMER2_voidSetMode(u8 u8Mode);

/* DECRIPTION : This Function For Set TIMER2 PreLoad Value
 * INPUT      : u8 , Range: 0~255
 * RETURN     : void
 ***********************************************************/
void TIMER2_voidSetPreLoad(u8 u8PreLoad);

/* DECRIPTION : This Function For Set TIMER2 Compare Match Value
 * INPUT      : u8 , Range: 0~255
 * RETURN     : void
 ***********************************************************/
void TIMER2_voidSetCTC(u8 u8CM);

/* DECRIPTION : This Function For Enable TIMER2 And Set Clock PreScaler
 * INPUT      : u8 , Range: 0~255 [ TIMER2_NO_PRESCALER_FACTOR , TIMER2_DIVISION_FACTOR_8  , TIMER2_DIVISION_FACTOR_32  ,
 *                                  TIMER2_DIVISION_FACTOR_64   , TIMER2_DIVISION_FACTOR_128 , TIMER2_DIVISION_FACTOR_256 ,
 *                                  TIMER2_DIVISION_FACTOR_256  , TIMER2_DIVISION_FACTOR_1024 ]
 * RETURN     : void
 *********************************************************************************************************************/
void TIMER2_voidEnable(u8 u8PreScaler);

/* DECRIPTION : This Function For Disable TIMER2
 * INPUT      : void
 * RETURN     : void
 ***********************************************/
void TIMER2_voidDisable();

/* DECRIPTION : This Function For Get TIMER2 Counter Register Value
 * INPUT      : void
 * RETURN     : u8 , Range: 0~255
 ******************************************************************/
u8 TIMER2_u8GetTIMER2CounterVal();


/***********************************************************************************************************************************/
/*****************************************************ICU************************************************************************/
/***********************************************************************************************************************************/

/* DECRIPTION : This Function For Initialization ICU According To The Configuration File
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidICUInt();

/* DECRIPTION : This Function For Select ICU Operating Edge
 * INPUT      : u8  , Range : 0~255 [TIMER_ICU_FALLING_EDGE , TIMER_ICU_RISING_EDGE]
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidSetICUEdge(u8 u8Edge);

/* DECRIPTION : This Function For Enable ICU Interrupt
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidICUEnable();

/* DECRIPTION : This Function For Disable ICU Interrupt
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidICUDisable();

/* DECRIPTION : This Function For Get ICU Value From ICR Register
 * INPUT      : void
 * RETURN     : u16 , Range : 0~65535
 *******************************************************************************************/
u16  TIMER_u16GetICUVal();



/***********************************************************************************************************************************/
/*****************************************************WDT************************************************************************/
/***********************************************************************************************************************************/

/* DECRIPTION : This Function For Initialization WDT According To The Configuration File
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidWDTInt();

/* DECRIPTION : This Function For Enable WDT with specific sleeping time
 * INPUT      : u8 , Range: 0~255  [WDT_PRESCALE_16_3_MS , WDT_PRESCALE_65_MS  , WDT_PRESCALE_32_5_MS , WDT_PRESCALE_0_13_S
 * 									WDT_PRESCALE_0_26_S  , WDT_PRESCALE_0_52_S , WDT_PRESCALE_1_0_S   , WDT_PRESCALE_2_1_S]
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidWDTEnable(u8 u8SleepTime);

/* DECRIPTION : This Function For Disable WDT
 * INPUT      : void
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidWDTDisable();

/***********************************************************************************************************************************/
/*****************************************************TIMER CALL BACK************************************************************************/
/***********************************************************************************************************************************/

/* DECRIPTION : This Function For SET TIMER ISR Call Back FUNCTIONS
 * INPUT      : THE ADRESS OF ISR FUNCTION (ITS NAME)
 *              u8 , Range: 0~255 [TIMER0_OVF_VECTOR , TIMER0_CTC_VECTOR  , TIMER1_OVF_VECTOR , TIMER1_CTCA_VECTOR
 *                                 TIMER1_ICU_VECTOR , TIMER1_CTCB_VECTOR , TIMER2_OVF_VECTOR , TIMER2_CTC_VECTOR ]
 * RETURN     : void
 *******************************************************************************************/
void TIMER_voidCallBack(void (*pvoidCallback)(void) , u8 u8TimerVactorId);



#endif /* TIMER_INTERFACE_H_ */
