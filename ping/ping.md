# PING() #

## Description ##
To request the status packet from a head module sensor. The data byte is passed by pointer and it will be overwritten with ID of the sensor if successful.

## Include ##
reroSensor_HM.h

## Prototype ##
byte ping(void);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte ping();

## See Also ##

InstructionSet

ReturnStatus
