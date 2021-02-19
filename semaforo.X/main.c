/*
 * File:   main.c
 * Author: 21192696
 *
 * Created on 19 de Fevereiro de 2021, 14:49
 */


#include <xc.h>
#include "config.h"
#include "semaforo.h"
#include "delay.h"

void main(void) 
{
    while(1)
    {
        int estado=0;
        int t;
        
        switch (estado)
        {
            case 0:
                        
                        estado =1;   
                        break;
                        
            case 1:
            
                        semaforo_init();
                        estado =2;
                        break;
                        
            case 2:
            
                        VerdeCar(1);
                        VermelhoCar(0);
                        AmareloCar(0);
                        if (botao() == (1))
                        estado =3;
                        break;
                        
            case 3:
            
                        t=3000;
                        estado=4;
                        
                    break;
            case 4:
                    delay(1);
                    --t;
                    if(t <=0 )
                    estado=5;
                    
                    break;
            case 5:
                    delay(1);
                    VermelhoCar(0);
                    AmareloCar(1);
                    t=1000;
                    estado=6;
                    
                    break;
            case 6:
                    delay(1);
                    --t;
                    if(t <=0)
                    estado=7;    
                    break;
            case 7:
                    AmareloCar(0);
                    VermelhoCar(1);
                    t=5000;
                    
                    break;
            case 8:
                    --t;
                    if(t <=0 )
                    estado=2;
                        break;
        }
    }
}
 