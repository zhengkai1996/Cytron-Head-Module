# READ MIC MAX SENSOR() #

## Description ##
This register save the maximum detected microphone value so far.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicMax(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return Mic Max Value

## Example ##
byte Mic
Mic=HM.readMicMax(100); //reading ID 100 head module sensor for MIc MAX Value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
