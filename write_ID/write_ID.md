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
byte writeID(100,101);
100=(byte ID); //100 is rero head module sensor ID
101=(byte NEW ID); //101 is new ID for head module sensor

## See Also ##

InstructionSet

ReturnStatus
