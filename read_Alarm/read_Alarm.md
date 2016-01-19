# READ ALARM SENSOR() #

## Description ##
The bits in Alarm register if set will cause the Head eyes to blink on that particular error. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readAlarm(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return alarm value

## Example ##
reroSensor_HM HM(2,3,8);

byte Alarm

Alarm=HM.readAlarm(100); //reading alarm value form ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
