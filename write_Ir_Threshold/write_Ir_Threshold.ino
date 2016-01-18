# READ WRITE IR THRESHOLD SENSOR() #

## Description ##
This function sets head module control registers IR threshold value . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeIrThres(byte ID,byte Ir);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeIrThres(byte 100,byte 103);
100=(byte ID); //100 is rero head module sensor ID
103=(byte Ir); //103 is Ir threshold value
## See Also ##

InstructionSet

ReturnStatus
