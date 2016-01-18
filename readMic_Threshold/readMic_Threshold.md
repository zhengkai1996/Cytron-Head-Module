# READ MIC THRESHOLD SENSOR() #

## Description ##
Microphone threshold determines the sound amplitude level that is recognized as hand clap. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicThres(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readMicThres(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
