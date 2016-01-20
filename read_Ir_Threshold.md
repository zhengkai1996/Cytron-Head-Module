# READ IR THRESHOLD SENSOR() #

## Description ##
IR threshold determines the threshold value of head IR sensor to trigger.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readIrThres(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return IR Threshold Value

## Example ##
byte Ir
Ir=readIrThres(100); //reading ID 100 Head Module Sensor Ir Threshold Value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
