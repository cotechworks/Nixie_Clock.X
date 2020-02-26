/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78.1
        Device            :  PIC16F1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set B_PIN aliases
#define B_PIN_TRIS                 TRISAbits.TRISA0
#define B_PIN_LAT                  LATAbits.LATA0
#define B_PIN_PORT                 PORTAbits.RA0
#define B_PIN_ANS                  ANSELAbits.ANSA0
#define B_PIN_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define B_PIN_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define B_PIN_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define B_PIN_GetValue()           PORTAbits.RA0
#define B_PIN_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define B_PIN_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define B_PIN_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define B_PIN_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set A_PIN aliases
#define A_PIN_TRIS                 TRISAbits.TRISA1
#define A_PIN_LAT                  LATAbits.LATA1
#define A_PIN_PORT                 PORTAbits.RA1
#define A_PIN_ANS                  ANSELAbits.ANSA1
#define A_PIN_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define A_PIN_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define A_PIN_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define A_PIN_GetValue()           PORTAbits.RA1
#define A_PIN_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define A_PIN_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define A_PIN_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define A_PIN_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set D_PIN aliases
#define D_PIN_TRIS                 TRISAbits.TRISA2
#define D_PIN_LAT                  LATAbits.LATA2
#define D_PIN_PORT                 PORTAbits.RA2
#define D_PIN_ANS                  ANSELAbits.ANSA2
#define D_PIN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D_PIN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D_PIN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D_PIN_GetValue()           PORTAbits.RA2
#define D_PIN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D_PIN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D_PIN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D_PIN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set C_PIN aliases
#define C_PIN_TRIS                 TRISAbits.TRISA3
#define C_PIN_LAT                  LATAbits.LATA3
#define C_PIN_PORT                 PORTAbits.RA3
#define C_PIN_ANS                  ANSELAbits.ANSA3
#define C_PIN_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define C_PIN_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define C_PIN_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define C_PIN_GetValue()           PORTAbits.RA3
#define C_PIN_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define C_PIN_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define C_PIN_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define C_PIN_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set H10_PIN aliases
#define H10_PIN_TRIS                 TRISAbits.TRISA4
#define H10_PIN_LAT                  LATAbits.LATA4
#define H10_PIN_PORT                 PORTAbits.RA4
#define H10_PIN_ANS                  ANSELAbits.ANSA4
#define H10_PIN_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define H10_PIN_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define H10_PIN_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define H10_PIN_GetValue()           PORTAbits.RA4
#define H10_PIN_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define H10_PIN_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define H10_PIN_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define H10_PIN_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set H01_PIN aliases
#define H01_PIN_TRIS                 TRISAbits.TRISA6
#define H01_PIN_LAT                  LATAbits.LATA6
#define H01_PIN_PORT                 PORTAbits.RA6
#define H01_PIN_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define H01_PIN_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define H01_PIN_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define H01_PIN_GetValue()           PORTAbits.RA6
#define H01_PIN_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define H01_PIN_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set M10_PIN aliases
#define M10_PIN_TRIS                 TRISAbits.TRISA7
#define M10_PIN_LAT                  LATAbits.LATA7
#define M10_PIN_PORT                 PORTAbits.RA7
#define M10_PIN_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define M10_PIN_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define M10_PIN_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define M10_PIN_GetValue()           PORTAbits.RA7
#define M10_PIN_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define M10_PIN_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set M01_PIN aliases
#define M01_PIN_TRIS                 TRISBbits.TRISB0
#define M01_PIN_LAT                  LATBbits.LATB0
#define M01_PIN_PORT                 PORTBbits.RB0
#define M01_PIN_WPU                  WPUBbits.WPUB0
#define M01_PIN_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define M01_PIN_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define M01_PIN_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define M01_PIN_GetValue()           PORTBbits.RB0
#define M01_PIN_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define M01_PIN_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define M01_PIN_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define M01_PIN_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set S10_PIN aliases
#define S10_PIN_TRIS                 TRISBbits.TRISB2
#define S10_PIN_LAT                  LATBbits.LATB2
#define S10_PIN_PORT                 PORTBbits.RB2
#define S10_PIN_WPU                  WPUBbits.WPUB2
#define S10_PIN_ANS                  ANSELBbits.ANSB2
#define S10_PIN_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define S10_PIN_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define S10_PIN_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define S10_PIN_GetValue()           PORTBbits.RB2
#define S10_PIN_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define S10_PIN_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define S10_PIN_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define S10_PIN_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define S10_PIN_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define S10_PIN_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set S01_PIN aliases
#define S01_PIN_TRIS                 TRISBbits.TRISB5
#define S01_PIN_LAT                  LATBbits.LATB5
#define S01_PIN_PORT                 PORTBbits.RB5
#define S01_PIN_WPU                  WPUBbits.WPUB5
#define S01_PIN_ANS                  ANSELBbits.ANSB5
#define S01_PIN_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define S01_PIN_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define S01_PIN_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define S01_PIN_GetValue()           PORTBbits.RB5
#define S01_PIN_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define S01_PIN_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define S01_PIN_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define S01_PIN_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define S01_PIN_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define S01_PIN_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/