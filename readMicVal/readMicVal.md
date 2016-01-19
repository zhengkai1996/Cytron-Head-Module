# READ MIC VAL () #

## Description ##
This register records the microphone signal amplitude at current time. Microphone signal is sampled frequency of 200Hz.


## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicVal(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return packet from sensor for Mic value 

## Example ##
reroSensor_HM HM(2,3,8);

byte Mic

Mic=readMicVal(100); //reading Mic Value form ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
