/*
 * TIMER_conig.h
 *
 *  Created on: ٠٨‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */

#ifndef TIMER_TIMER_CONIG_H_
#define TIMER_TIMER_CONIG_H_

/*
 * PLEASE CHOOSE FROM
 * TIMER0_NORMAL_MODE
 * TIMER0_CTC_MODE
 * TIMER0_FAST_PWM_MODE
 * TIMER0_PHASECORRECT_MODE
 */

#define TIMER0_MODE   TIMER0_PHASECORRECT_MODE
/*
 * PLEASE CHOOSE PRESCALER
 * TIMER0_PRESCALER_NO_CLK
 * TIMER0_PRESCALER_NO_PRESCALER
 * TIMER0_PRESCALER_8
 * TIMER0_PRESCALER_64
 * TIMER0_PRESCALER_256
 * TIMER0_PRESCALER_1024
 * TIMER0_PRESCALER_EXTCLK_FALL_EDGE
 * TIMER0_PRESCALER_EXTCLK_FALL_EDGE
 */
#define TIMER0_PRESCALER    TIMER0_PRESCALER_1024

/*
 * PLEASE CHOOSE OC0 PIN MODE:
 * TIMER0_OC0_MODE_DISSCONECTED
 * TIMER0_OC0_MODE_TOGGLE
 * TIMER0_OC0_MODE_CLEAR
 * TIMER0_OC0_MODE_SET
 */
#define TIMER0_OC0_MODE    TIMER0_PWM_NON_INVERTED
#define FCPU 16
#define TIMER0_OVF_INT_ID   0
#define TIMER0_COMP_INT_ID   1

#endif /* TIMER_TIMER_CONIG_H_ */
