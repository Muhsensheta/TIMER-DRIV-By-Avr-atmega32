/*
 * main.c
 *
 *  Created on: ٠٨‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */
#include "STD_TYPES.h"
#include"DIO_int.h"

#include"LED_int.h"
#include"SSD_init.h"
#include"TIMER_int.h"
#include"GIE_int.h"

void Action(void);
void main(){

	M_DIO_void_setPinDir(PORTB_ID,PIN3, OUT);
	//init led
	//H_Led_void_ledInit(RED_LED);

	//init timer mode +timer Oc0 mode
	M_TIMER0_void_Init();
	//set  call back
	//M_TIMER0_void_setCallBack(Action, TIMER0_OVF_INT_ID);
	//set interrupt
	//M_TIMER0_void_EnableInt(TIMER0_OVF_INT_ID);
	//set time
	//M_TIMER0_void_setTime(1000);
	//GIE
	//M_GIE_void_enable();
	//timer starrt;
	M_TIMER0_void_start();
	while(1)
	{
		M_TIMER0_void_setFastPWM(250);


	}
}
void Action(void)
{
	H_Led_void_toggle(RED_LED);
	M_GIE_void_disable();
}

