/*
 * File:   semaforo.c
 * Author: 21192696
 *
 * Created on 19 de Fevereiro de 2021, 15:08
 */


#include <xc.h>
#define   VERMELHO        PORTDbits.RD7   
#define   AMARELO         PORTDbits.RD6 
#define   VERDE           PORTDbits.RD5 
#define   VERMELHOPED     PORTDbits.RD3 
#define   VERDEPED        PORTDbits.RD2 
#define   BOTAO           PORTDbits.RD1


void semaforo_init (void)
{
    TRISDbits.TRISD7=0;
    TRISDbits.TRISD6=0;
    TRISDbits.TRISD5=0;
    TRISDbits.TRISD3=0;
    TRISDbits.TRISD2=0;
    TRISDbits.TRISD1=1;
    
    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD2 = 0;
    
}

void VermelhoCar (int x)
{
    VERMELHO =x;
}

void AmareloCar (int x)
{
    AMARELO= x;
}

void VerdeCar (int x)
{
    VERDE= x;
}

void VermelhoPED (int x)
{
    VERMELHOPED = x;
}

void VerdePED (int x)
{
    VERDEPED= x;
}

int botao (void)
{
    return(BOTAO);
}