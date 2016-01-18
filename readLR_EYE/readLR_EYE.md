# READ LR EYE SENSOR() #

## Description ##
Eye LR register control whether both eyes or single eye is turned on. Two least significant bits of the register control left and right eye respectively.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readLR(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readLR(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
