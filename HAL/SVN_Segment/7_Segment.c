#include "7_Segment.h"
#include "DIO.h"
#define F_CPU 16000000
#include <util/delay.h>


void _7segmentInit(){
	
	DIO_setPinDir(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_OUTPUT);
	
	DIO_setPinDir(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDir(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,DIO_PIN_OUTPUT);
	
	DIO_setPinValue(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,SEGMENT_COM_OFF);
	DIO_setPinValue(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,SEGMENT_COM_OFF);
	DIO_setPinValue(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,SEGMENT_COM_OFF);
	DIO_setPinValue(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,SEGMENT_COM_OFF);
	
};

void setDigit(uint8 num){
	switch(num)
	{
		case 0:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 1:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 2:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 3:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 4:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 5:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 6:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 7:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_LOW);
		break;
		case 8:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_HIGH);
		break;
		case 9:
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN1,DIO_PIN_HIGH);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN2,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN3,DIO_PIN_LOW);
		DIO_setPinValue(SEGMENT_DATA_PORT,SEGMENT_DATA_PIN4,DIO_PIN_HIGH);
		break;
		
	}

		_delay_ms(1);
	};

void selectDigit(uint8 digit){
	switch(digit){

		case SEGMENT_COM1:
		DIO_setPinValue(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,SEGMENT_COM_ON);
		DIO_setPinValue(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,SEGMENT_COM_OFF);
		DIO_setPinValue(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,SEGMENT_COM_OFF);
		DIO_setPinValue(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,SEGMENT_COM_OFF);
		break;
		case SEGMENT_COM2:
			DIO_setPinValue(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,SEGMENT_COM_ON);
			DIO_setPinValue(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,SEGMENT_COM_OFF);
		break;		
		case SEGMENT_COM3:
			DIO_setPinValue(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,SEGMENT_COM_ON);
			DIO_setPinValue(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,SEGMENT_COM_OFF);
		break;
		case SEGMENT_COM4:
			DIO_setPinValue(SEGMENT_COM1_PORT,SEGMENT_COM1_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM2_PORT,SEGMENT_COM2_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM3_PORT,SEGMENT_COM3_PIN,SEGMENT_COM_OFF);
			DIO_setPinValue(SEGMENT_COM4_PORT,SEGMENT_COM4_PIN,SEGMENT_COM_ON);
		break;
	}
	
	};