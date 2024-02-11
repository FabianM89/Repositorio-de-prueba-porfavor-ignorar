/*
 * File:   Main.c
 * Author: fabianmaster98
 *
 * Created on 10 de febrero de 2024, 12:43 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 20000000

void main(void) {
    ADCON1 = 0X0F;
    TRISB = 1;
    TRISD = 0;
    
    if(PORTBbits.RB6==1){
        LATDbits.LATD6=1;
    }
    
    if(PORTBbits.RB5==1){
        LATDbits.LATD5=1;
    }
    
    if(PORTBbits.RB4==1){
        LATDbits.LATD4=1;
    }
    
    if(PORTBbits.RB3==1){
        LATDbits.LATD3=1;
    }
    
    if(PORTBbits.RB2==1){
        LATDbits.LATD2=1;
    }
    
    if((PORTBbits.RB2==0)||(PORTBbits.RB1>=1)){
        LATDbits.LATD1=0;
    }
    
    if(PORTBbits.RB0==0){
        LATDbits.LATD1=0;
    }
    
    if((PORTBbits.RB6==1)&&(PORTBbits.RB5==1)&&(PORTBbits.RB4==1)&&(PORTBbits.RB3==1)&&(PORTBbits.RB2==1)){
        if(PORTBbits.RB1==1){
            LATDbits.LATD1=1;
        }
    }
    
    return;
}
