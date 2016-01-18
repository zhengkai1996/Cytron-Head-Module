# READ WRITE LR EYE SENSOR() #

## Description ##
This function sets head module control registers LR EYE . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeLR(byte ID,byte eye);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeBaudRate(byte 100,byte 0);
100=(byte ID); //100 is rero head module sensor ID
0=(byte eye); //0bit is left eye and 1bit is right eye  
## See Also ##

InstructionSet

ReturnStatus
