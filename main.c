/*
 * File:   main.c
 * Author: KOKUBO
 *
 * Created on February 26, 2020, 12:06 AM
 */

#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include <stdio.h>

#define ON_TIME 30
#define TOTAL_TIME 50

uint8_t DisplayPhase = 0;
uint8_t DisplayVal[6] = {0};
uint8_t DisplayNum = 0;
uint8_t DisplayErrNum = 0;
unsigned int DisplayCnt = 0;

uint8_t I2C_RxBuf = 0;
uint8_t I2C_ReadCnt = 0;

extern volatile uint8_t i2c1RdData;
//extern static volatile i2c1_state_t i2c1State;


void Timer_ISR(void)
{
    if(DisplayCnt == 0){    /*表示ON*/
        if(DisplayNum == 0) H10_PIN_SetHigh();
        else if(DisplayNum == 1) H01_PIN_SetHigh();
        else if(DisplayNum == 2) M10_PIN_SetHigh();
        else if(DisplayNum == 3) M01_PIN_SetHigh();
        else if(DisplayNum == 4) S10_PIN_SetHigh();
        else if(DisplayNum == 5) S01_PIN_SetHigh();
    }else if(DisplayCnt == ON_TIME){    /*表示OFF*/
        H10_PIN_SetLow();
        H01_PIN_SetLow();
        M10_PIN_SetLow();
        M01_PIN_SetLow();
        S10_PIN_SetLow();
        S01_PIN_SetLow();
    }else if(DisplayCnt == TOTAL_TIME){ /*表示桁の切り替え、表示の変更*/
        DisplayNum++;
        if(DisplayNum >= 6) DisplayNum = 0;
        
        if((DisplayVal[DisplayNum] & 0b0001) != 0) A_PIN_SetHigh();
        else A_PIN_SetLow();
        
        if((DisplayVal[DisplayNum] & 0b0010) != 0) B_PIN_SetHigh();
        else B_PIN_SetLow();
        
        if((DisplayVal[DisplayNum] & 0b0100) != 0) C_PIN_SetHigh();
        else C_PIN_SetLow();
        
        if((DisplayVal[DisplayNum] & 0b1000) != 0) D_PIN_SetHigh();
        else D_PIN_SetLow();
    }else{
        /*処理なし*/
    }
    
    DisplayCnt++;
    if(DisplayCnt > TOTAL_TIME)DisplayCnt = 0;
}

static void I2C1_ReadISR(void){
    DisplayVal[I2C_ReadCnt] = i2c1RdData;
    I2C_ReadCnt++;
}

static void I2C1_AddrISR(void){
    I2C_ReadCnt = 0;
}

void main(void) {
    /*システム初期化*/
    SYSTEM_Initialize();
    
    /*タイマー割込み設定*/
    TMR1_SetInterruptHandler(Timer_ISR);
    
    /*割込み許可*/
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    /*タイマー開始*/
    TMR1_StartTimer();
    
    /*I2C開始*/
    I2C1_Open();
    I2C1_SlaveSetReadIntHandler(I2C1_ReadISR);
    I2C1_SlaveSetAddrIntHandler(I2C1_AddrISR);
    
    while(1)
    {
           
    }
    return;
}
