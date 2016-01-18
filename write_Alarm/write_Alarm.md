# READ WRITE ALARM SENSOR() #

## Description ##
The bits in Alarm register if set will cause the Head eyes to blink on that particular error. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeAlarm(byte ID,byte T);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeAlarm(byte 100,byte 8);
100=(byte ID); //100 is rero head module sensor ID
8=(byte 8); // 8 is rero head module alarm sensor value

## See Also ##
InstructionSet

ReturnStatus
