#include<stdio.h>
#include<stdlib.h>

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "port_config.h"

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_



#define DDRA_REG *((volatile u8*)0x3A)
#define PORTA_REG *((volatile u8*)0x3B)
#define PINA_REG *((volatile u8*)0x39)

#define DDRB_REG *((volatile u8*)0x37)
#define PORTB_REG *((volatile u8*)0x38)
#define PINB_REG *((volatile u8*)0x36)

#define DDRC_REG *((volatile u8*)0x34)
#define PORTC_REG *((volatile u8*)0x35)
#define PINC_REG *((volatile u8*)0x33)

#define DDRD_REG *((volatile u8*)0x31)
#define PORTD_REG *((volatile u8*)0x32)
#define PIND_REG *((volatile u8*)0x30)


typedef enum{
 DIO_enumPORTA,         
 DIO_enumPORTB,         
 DIO_enumPORTC,         
 DIO_enumPORTD         
}Ports;

/*
#define DIO_u8PIN0         0
#define DIO_u8PIN1         1
#define DIO_u8PIN2         2
#define DIO_u8PIN3         3
#define DIO_u8PIN4         4
#define DIO_u8PIN5         5
#define DIO_u8PIN6         6
#define DIO_u8PIN7         7
*/

#define PORT_u8INPUT          0
#define PORT_u8OUTPUT         1

#define PORT_u8LOW            0
#define PORT_u8HIGH           1




void PORT_vidInit(void);





/*#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)                CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)           0b##b7##b6##b5##b4##b3##b2##b1##b0*/


#endif
