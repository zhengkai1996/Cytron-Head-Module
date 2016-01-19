# READ MIC TRG SENSOR() #

## Description ##
This register is set to 1 when the MIC VAL is greater than the MIC Threshold else it is 0. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicTRG(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
Return Mic TRG Value

## Example ##
reroSensor_HM HM(2,3,8);

byte Mic

Mic=HM.readMicTRG(100);//reading ID 100 Head Module Sensor Mic TRG Value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
