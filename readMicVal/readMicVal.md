# READ MIC VAL () #

## Description ##
This register records the microphone signal amplitude at current time. Microphone signal is sampled frequency of 200Hz.


## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicVal(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readMicVal(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
