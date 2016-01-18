# READ ALARM SENSOR() #

## Description ##
The bits in Alarm register if set will cause the Head eyes to blink on that particular error. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readAlarm(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readAlarm(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
