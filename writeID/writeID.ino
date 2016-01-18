# READ WRITE ID SENSOR() #

## Description ##
This function is set new ID for Head Module Sensor.

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeID(byte ID,byte NEW ID);

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
