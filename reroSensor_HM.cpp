#include "reroSensor_HM.h"
SoftwareSerial* reroHMSerial;

reroSensor_HM::reroSensor_HM(byte rxpin, byte txpin, byte ctrlpin)
{
  _rxpin = rxpin;
  _txpin = txpin;
  _ctrlpin = ctrlpin;
}

void reroSensor_HM::begin(long baudrate)
{
  byte hardwareSerial;
  if (_rxpin == 0 && _txpin == 1)
  {
    hardwareSerial = true;
    Serial.begin(baudrate);
    while (!Serial);
    Serial.setTimeout(1000);
  }
  else
  {
    hardwareSerial = false;
    pinMode(_rxpin, INPUT);
    pinMode(_txpin, OUTPUT);
    reroHMSerial = new SoftwareSerial(_rxpin, _txpin);
    reroHMSerial->begin(baudrate);
    reroHMSerial->setTimeout(1000);
  }
  pinMode(_ctrlpin, OUTPUT);
  digitalWrite(_ctrlpin, TxMode);
}

//******************************************
//**************BaudRate********************
//******************************************

byte reroSensor_HM::readBaudRate(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(BaudRateReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - BaudRateReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

byte reroSensor_HM::writeBaudRate(byte ID,byte BR) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(BaudRateReg);
  reroHMSerial->write(BR);
  byte checksum = (0xFF - ID - 0x04 - writeInst - BaudRateReg - BR);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

//*********************************
//*************ID******************
//*********************************

byte reroSensor_HM::readID(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(IDReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - IDReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

byte reroSensor_HM::writeID(byte ID,byte NewID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(IDReg);
  reroHMSerial->write(NewID);
  byte checksum = (0xFF - ID - 0x04 - writeInst - IDReg - NewID);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}
//*********************************
//************MOdel*****************
//*********************************
word reroSensor_HM::readModel(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

//Transmit to Sensor===============================================
  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(ModelReg);  //0x00
  reroHMSerial->write(0x02);
  byte checksum = (0xFF - ID - 0x04 - readInst - ModelReg - 0x02);
  reroHMSerial->write(checksum);

//Receive from Sensor====================================================
  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 7);

  word model;  //16bits

  if (nbyte < 7) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    model=buff[6]; 
    model=model<<8;
    model=model|buff[5];
    return (model);
    
  }
}


//******************************************
//*****************PING*********************
//******************************************
byte reroSensor_HM::ping(void) {
  byte buff[6];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);

  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFE);
  reroHMSerial->write(0x02);
  reroHMSerial->write(pingInst);//ping insturution
  byte checksum = (0xFF - 0xFE - 0x02 - pingInst);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);

  int nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0);
  }
  else
  {
    errStatus = buff[4];
    return buff[2];
  }
}

//*******************************************
//****************FactoryReset***************
//*******************************************
byte reroSensor_HM::factoryReset(byte ID) {
  byte buff[6];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }
  //send intruction
  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x02);
  reroHMSerial->write(factoryResetInst);//factory reset insturution
  byte checksum = (0xFF - ID - 0x02 - factoryResetInst);
  reroHMSerial->write(checksum);
  //receive return status
  digitalWrite(_ctrlpin, RxMode);

  int nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = (0xFF);
    return (0);
  }
  else
  {
    errStatus = buff[4];
    return (1);
  }
}
//**********************************************
//********************IR************************
//**********************************************
byte reroSensor_HM::readIrThres(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(IrThresReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - IrThresReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::writeIrThres(byte ID,byte Ir) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(IrThresReg);
  reroHMSerial->write(Ir);
  byte checksum = (0xFF - ID - 0x04 - writeInst - IrThresReg - Ir);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::readIr(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(IrReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - IrReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::readIrTRG(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(IrReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - IrReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

//**********************************************
//*****************MIC**************************
//**********************************************
byte reroSensor_HM::readClapCount(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(ClapCountReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - ClapCountReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::writeClapCount(byte ID,byte Ir) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(ClapCountReg);
  reroHMSerial->write(Ir);
  byte checksum = (0xFF - ID - 0x04 - writeInst - ClapCountReg - Ir);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}



byte reroSensor_HM::readMicThres(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(MicThresReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - MicThresReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::writeMicThres(byte ID,byte Ir) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(MicThresReg);
  reroHMSerial->write(Ir);
  byte checksum = (0xFF - ID - 0x04 - writeInst - MicThresReg - Ir);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::readMicMax(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(MicMaxReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - MicMaxReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}


byte reroSensor_HM::readMicVal(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(MicValReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - MicValReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

byte reroSensor_HM::readMicTRG(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(MicTRGReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - MicTRGReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}



//******************************************
//******************RGB*********************
//******************************************
byte reroSensor_HM::readRGB(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(RGBReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - RGBReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

byte reroSensor_HM::writeRGB(byte ID,byte colour) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(RGBReg);
  reroHMSerial->write(colour);
  byte checksum = (0xFF - ID - 0x04 - writeInst - RGBReg - colour);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}
//*************************************
//**************EYE LR*****************
//*************************************
byte reroSensor_HM::readLR(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(LRReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - LRReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}



byte reroSensor_HM::writeLR(byte ID,byte eye) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(LRReg);
  reroHMSerial->write(eye);
  byte checksum = (0xFF - ID - 0x04 - writeInst - LRReg - eye);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}

//*************************************
//**************Alarm******************
//*************************************
byte reroSensor_HM::readAlarm(byte ID) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(readInst);
  reroHMSerial->write(AlarmReg);
  reroHMSerial->write(0x01);
  byte checksum = (0xFF - ID - 0x04 - readInst - AlarmReg - 0x01);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}



byte reroSensor_HM::writeAlarm(byte ID,byte T) {
  byte buff[7];
  while (reroHMSerial->available()) {
    reroHMSerial->read();
  }

  digitalWrite(_ctrlpin, TxMode);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(0xFF);
  reroHMSerial->write(ID);
  reroHMSerial->write(0x04);
  reroHMSerial->write(writeInst);
  reroHMSerial->write(AlarmReg);
  reroHMSerial->write(T);
  byte checksum = (0xFF - ID - 0x04 - writeInst - AlarmReg - T);
  reroHMSerial->write(checksum);

  digitalWrite(_ctrlpin, RxMode);
  byte nbyte = reroHMSerial->readBytes(buff, 6);

  if (nbyte < 6) {
    errStatus = 0xFF;
    return (0xFF);
  }
  else {
    errStatus = buff[4];
    return buff[5];
  }
}




