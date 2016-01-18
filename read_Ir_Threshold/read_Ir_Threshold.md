# READ IR THRESHOLD SENSOR() #

## Description ##
IR threshold determines the threshold value of head IR sensor to trigger.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readIrThres(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readIrThres(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
