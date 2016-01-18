# READ RGB MODE() #

## Description ##
This register reading the color of rero head eye’s LED. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readRGB(byte ID);

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
