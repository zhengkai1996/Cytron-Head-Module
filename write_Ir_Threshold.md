# READ WRITE IR THRESHOLD SENSOR() #

## Description ##
This function sets head module control registers IR threshold value . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeIrThres(byte ID,byte Ir);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte Ir; //byte Ir is HEAD MODULE SENSOR NEW Ir Threshold value

## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error

## Example ##
reroSensor_HM HM(2,3,8);

byte Ir

Ir= HM.writeIrThres(100,101); // set ID 100 Head Module Senor to 101 New Ir Threshold value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

