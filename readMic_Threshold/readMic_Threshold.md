# READ MIC THRESHOLD SENSOR() #

## Description ##
Microphone threshold determines the sound amplitude level that is recognized as hand clap. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicThres(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
Return packet form sensor for Mic Threshold Value 

## Example ##
reroSensor_HM HM(2,3,8);

byte Mic

Mic=HM.readMicThres(100);  //reading Mic Threshold value form ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
