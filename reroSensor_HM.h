#include"Arduino.h"
#include <SoftwareSerial.h>
#ifndef reroSensor_HM_h
#define reroSensor_HM_h
//***********************************************
//*Instuction
//***********************************************
#define pingInst 0x01 //Ping Instuction
#define readInst 0x02 //Read Instuction
#define writeInst 0x03 //Write Instuction
#define factoryResetInst 0x06//Factory Reset Instuction


//*****************************************
//*******Control Register Address**********
//*****************************************
#define ModelReg (byte)0x00
#define IDReg 0x03
#define BaudRateReg 0x04 //Baudrate Instuction
//#define returnDelayReg 0x05 //returnDelay Instuction
//#define returnEnableReg 0x06 //returnEnable Instuction
#define IrThresReg 0x07 //IR Threshold Instuction
#define MicThresReg 0x08 //Mic thershold Instruction
#define AlarmReg 0x09 //Alarm Instruction
#define RGBReg 0x0A //RGB Instuction
#define LRReg  0x0B//Eye LR Instruction
#define MicMaxReg 0x0C//MicMax Instruction
#define ClapCountReg 0x0D//ClapCount Instruction
#define MicValReg 0x0E//Mic value Instuction
#define MicTRGReg 0x0F//Mic value Instuction
#define IrReg  0x10//IR value Instruction
#define IrTRGReg 0x11//IR Instruction
//#define LOCK 0x14//Lock Instruction


#define TxMode LOW
#define RxMode HIGH

class reroSensor_HM
{
  public:
    byte errStatus;
    byte _rxpin;
    byte _txpin;
    byte _ctrlpin;

    reroSensor_HM (byte rxpin, byte txpin, byte ctrlpin);
    void begin(long baudrate);
    
    //*****************************
    //==========Model===============
    //*****************************    
    word readModel(byte ID);

    //*****************************
    //==========BuadRate===============
    //*****************************
    byte readBaudRate(byte ID);
    
    //*****************************
    //==========ID=================
    //*****************************
    byte readID(byte ID);
    byte writeID(byte ID,byte NewID);
    
    //*****************************
    //===========Ping==============
    //******************************
    byte ping(void);


    //******************************
    //========Factory Reset========
    //******************************
    byte factoryReset(byte ID);
   

   //********************************
   //=======READ Ir VALUE============
   //********************************
    byte readIr(byte ID);
   
   //********************************
   //=======READ Mic VALUE============
   //********************************
   byte readMicVal(byte ID);
  
   //********************************
   //=======READ RGB VALUE============
   //********************************
   byte readRGB(byte ID);
   
   //********************************
   //=======READ IR TRG VALUE========
   //********************************
   byte readIrTRG(byte ID);
   
   //********************************
   //=======READ LR VALUE============
   //********************************
   byte readLR(byte ID);
   
   //********************************
   //====READ MIC THRESHOLD VALUE====
   //********************************
   byte readMicThres(byte ID);
   
   //********************************
   //====READ IR Threshold VALUE=====
   //********************************
   byte readIrThres(byte ID);
   
   //********************************
   //=======READ ALARM VALUE=========
   //********************************
   byte readAlarm(byte ID);

   //********************************
   //=======READ MIC TRG VALUE=======
   //********************************
   byte readMicTRG(byte ID);
 
   //********************************
   //=====READ MIC MAX VALUE=========
   //********************************
   byte readMicMax(byte ID);

   //********************************
   //=====READ MIC MAX VALUE=========
   //********************************
   byte readClapCount(byte ID);
   
   //********************************
   //=====WRITE BAUDRATE VALUE=======
   //********************************
   byte writeBaudRate(byte ID,byte BR);
    
   //********************************
   //=======WRITE ALARM VALUE========
   //********************************
   byte writeAlarm(byte ID,byte T);
   
   //********************************
   //=======WRITE RGB VALUE==========
   //********************************
   byte writeRGB(byte ID,byte colour);

   //********************************
   //=======WRITE CLAPCOUNT VALUE==========
   //********************************
   byte writeClapCount(byte ID,byte CC);
   
   
   //********************************
   //=======WRITE LR VALUE============
   //********************************
   byte writeLR(byte ID,byte eye);

   //********************************
   //===WRITE IR THRESHOLD VALUE=====
   //********************************
   byte writeIrThres(byte ID,byte Ir);

   //********************************
   //===WRITE MIC THRESHOLD VALUE====
   //********************************
   byte writeMicThres(byte ID,byte Ir);
};
#endif



