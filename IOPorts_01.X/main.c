/*******************************************************************************
 * FileName:        main.c
 * ProjectName:     IOPorts_01
 * Dependencies:    See INCLUDES section below
 * Processor:       PIC18F45K20
 * Compiler:        XC8
 * Version:         1.45
 * Author:          Sebasti�n Fernando Puente Reyes
 * e-mail:          sebastian.puente@unillanos.edu.co
 * Date:            Marzo de 2018
 *******************************************************************************
 * DESCRIPCI�N
 * Oscilador: Interno a 16 MHz, Fosc = 16 MHz.
 * Requerimiento: Encender un LED conectado en la l�nea RD0.
 ******************************************************************************/
/*******************************************************************************
 * Librerias
 ******************************************************************************/
#include <xc.h>
#include "ConfigurationBits.h"

/*******************************************************************************
 * Macros
 ******************************************************************************/

/*******************************************************************************
 * Prototipos de funciones
 ******************************************************************************/

/*******************************************************************************
 * Variables globales
 ******************************************************************************/

/*******************************************************************************
 * Funci�n Principal
 ******************************************************************************/
void main(void)
{
    //Configuraci�n frecuencia oscilador interno
    OSCCONbits.IRCF = 0b111;    //Oscilador interno a 16 MHz, Fosc = 16Mhz
    
    //Configuraci�n puertos I/O
    LATD = 0;
    TRISDbits.RD0 = 0;          //L�nea RD0 como salida digital

    while(1)
    {
        //Encender LED conectado en la l�nea RD0
        PORTDbits.RD0 = 1;  //Nivel alto por la l�nea RD0
    }
}

/*******************************************************************************
 * DISE�O DIGITAL CON MICROCONTROLADORES PIC DE 8 BITS
 * Sebasti�n Puente Reyes, M.Sc.
 * Grupo de Estudio en Hardware Reconfigurable y Sistemas Embebidos - GEHRSE
 * Escuela de Ingenier�a
 * Facultad de Cienc�as B�sicas e Ingenier�a
 * Universidad de los Llanos
 * Villavicencio - Meta, Colombia
 ******************************************************************************/
