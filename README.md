# Nixie_Clock.X

自動生成されるi2c1_slave.cを修正
========================================================
static void I2C1_Isr() 
{ 
    I2C1_SlaveClearIrq();

    // read SSPBUF to clear BF
    i2c1RdData = I2C1_SlaveGetRxData();

    if(I2C1_SlaveIsRead())
    {
        i2c1State = I2C1_TX;
    }
    else
    {
        i2c1State = I2C1_RX;
    }
    
    switch(i2c1State)
    {
        case I2C1_TX:
            if(!I2C1_SlaveIsWriteCollision())
            {
                I2C1_SlaveWrCallBack();
            }
            else
            {
                I2C1_SlaveWrColCallBack();
                I2C1_SlaveRestart();
            }
            i2c1NextState = I2C1_ADDR;
            break;
           
        case I2C1_RX:
            if (I2C1_SlaveIsData()) 
            {
//                if(I2C1_SlaveIsRxBufFull())
//                { 
                    I2C1_SlaveRdCallBack();
//                }
            }
            else
            {
                I2C1_SlaveAddrCallBack();
                i2c1NextState = I2C1_ADDR;
            }
            break;
        default:          
            break;
    }
    i2c1State = i2c1NextState;
    I2C1_SlaveReleaseClock();
}
========================================================
