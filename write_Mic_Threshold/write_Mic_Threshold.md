# READ WRITE MIC THRESHOLD SENSOR() #

## Description ##
This function sets head module control registers Mic Threshold . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeMicThres(byte ID,byte IR);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeBaudRate(byte 100,byte 103);
100=(byte ID); //100 is rero head module sensor ID
103=(byte IR); //103 is new value for Mic Threshold
## See Also ##

InstructionSet

ReturnStatus
