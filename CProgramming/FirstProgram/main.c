/*
 * FirstProgram.c
 *
 * Created: 2020-06-01 오전 9:55:22
 * Author : user
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA |= 0x01;		// PA0 핀을 출력으로 설정
	
    while (1) 
    {
		PORTA |= 0x01;
		_delay_ms(500);
		PORTA &= ~0x01;
		_delay_ms(500);
    }
	
	return 0;
}

