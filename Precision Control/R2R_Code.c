#include <msp430.h> 
/*
 * R2R code.
 *
 *  Created on: Nov 18, 2017
 *  Last Edited: Nov 18, 2017
 *  Author: Tyler Brady
 */
int i;
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P6DIR |= BIT0 + BIT1 + BIT2 + BIT3 + BIT4 + BIT5 + BIT6;
    P2DIR |= BIT7;

    while(1)
    {
    for(i=0; i < 256; i++)
    {
        P2OUT = i;
        P6OUT = i;
    }
    }

}
