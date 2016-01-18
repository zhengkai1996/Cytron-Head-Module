# READ WRITE BAUDRATE SENSOR() #

## Description ##
This function sets head module control registers baudrate . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte write(byte ID,byte BR);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte write(byte 100,byte 103);
100=(byte ID); //100 is rero head module sensor ID
103=(byte BR); //103 is 9600 BaudRate
## See Also ##

InstructionSet

ReturnStatus
