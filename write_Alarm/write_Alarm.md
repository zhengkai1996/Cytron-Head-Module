# READ WRITE ALARM SENSOR() #

## Description ##
The bits in Alarm register if set will cause the Head eyes to blink on that particular error. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeAlarm(byte ID,byte New Val);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte New Val; // byte New Val is Setting Value 

## Returns ##
return Alarm New Setting Value

## Example ##
reroSensor_HM HM(2,3,8);

byte Alarm

Alarm=HM.writeAlarm(100,101)// Set ID 100 Head Module Sensor Value to 101

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
