//       _____ ____          //
//      |___  |  _ \         //
//         _| | |_) |        //
//        |_  |  _ <         //
//          |_|_| \_\        //
//                           //
// Written By Floris Romeijn //

#define F_CPU 2000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stddef.h>
#include <stdio.h>

int main(void)
{
  PORTC.DIRSET = PIN0_bm;

  while(1)
  {
    PORTC.OUTTGL = PIN0_bm;
    _delay_ms(500);
  }
}