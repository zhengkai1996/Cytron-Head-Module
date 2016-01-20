# READ WRITE MIC THRESHOLD SENSOR() #

## Description ##
This function sets head module control registers Mic Threshold . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeMicThres(byte ID,byte IR);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte IR; //byte IR is HEAD MODULE SENSOR NEW Mic Threshold value

## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error

## Example ##
reroSensor_HM HM(2,3,8);

byte Mic

Mic= HM.writeMicThres(100,101); // set ID 100 Head Module Senor to 101 New Mic Threshold value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
