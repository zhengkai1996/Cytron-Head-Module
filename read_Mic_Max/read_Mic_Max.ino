# READ MIC MAX SENSOR() #

## Description ##
This register save the maximum detected microphone value so far.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicMax(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readMicMax(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
