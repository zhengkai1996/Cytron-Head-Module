# READ IR SENSOR() #

## Description ##
This register records the IR value at current time. IR value is sampled at frequency of 200Hz. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readIr(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readIr(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
