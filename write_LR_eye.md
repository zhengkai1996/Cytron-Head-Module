# READ WRITE LR EYE SENSOR() #

## Description ##
This function sets head module control registers Left or Right EYE . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeLR(byte ID,byte eye);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte eye; //byte eye is HEAD MODULE SENSOR NEW LR Lens value

## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error

## Example ##
reroSensor_HM HM(2,3,8);

byte Baud

Baud= HM.writeBaudRate(100,103); // set ID 100 Head Module Senor to 19200 bps New BaudRate value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
