/*
 * main.c
 *
 * Created: 12/3/2023 5:52:13 AM
 *  Author: Rana
 */ 


#include<stdio.h>
#include<stdlib.h>

#include<util/delay.h>

#include "../Lib/BIT_MATH.h"
#include "../Lib/STD_TYPES.h"

#include "../../includes/dio.h"
#include "../../includes/port.h"
//#include "../MCAL/port_config.h"


int main(void)
{
	/***************************** task1 ****************************************/
	/*********** CONFIGRATION: #define DIO_PIN0_CONFIG    OUTPUT_HIGH   #define DIO_PIN1_CONFIG    OUTPUT_HIGH***************/
	/*DIO_enumError_t Dio_retValue;
	PORT_vidInit();
	
	while(1){
		
		Dio_retValue=DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
		Dio_retValue=DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicLow);
		_delay_ms(1000);
		
		Dio_retValue=DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicLow);
		Dio_retValue=DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicHigh);
		_delay_ms(1000);
	}
	*/
	/**************************** task2 ******************************************/
	
	DIO_enumError_t Dio_retValue;
	PORT_vidInit();
	u8 Loc_u8count =0;
	u8 Loc_u8PinB0State;
	u8 * Loc_pu8PinB0State= &Loc_u8PinB0State;
	
	
	while(1)
	{
		Dio_retValue=DIO_enumReadState(DIO_enumPortB,DIO_enumPin0,Loc_pu8PinB0State);
		
		
		if(*Loc_pu8PinB0State==0)
		{
			//_delay_ms(100);
			_delay_ms(200);
			Dio_retValue=DIO_enumReadState(DIO_enumPortB,DIO_enumPin0,Loc_pu8PinB0State);
			if(*Loc_pu8PinB0State==0)
			{
				Loc_u8count++;
				if(Loc_u8count > 15)
				{
					Loc_u8count=0;
				}
				Dio_retValue=DIO_giveValueToPort(DIO_enumPortA,Loc_u8count);
			}
			
			
			
			
		}
		
		
	}
	
	
	
	return 0;
}

