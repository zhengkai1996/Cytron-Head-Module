# READ MIC TRG SENSOR() #

## Description ##
This register is set to 1 when the MIC VAL is greater than the MIC Threshold else it is 0. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readMicTRG(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readMicTRG(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
