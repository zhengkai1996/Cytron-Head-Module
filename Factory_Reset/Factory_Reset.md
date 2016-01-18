# FactoryReset() #

## Description ##
This function resets head module control registers values to factory default. This includes ID and baudrate. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte factoryReset(byte ID);

## Parameters ##
none

## Returns ##
Error status in word. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte factoryReset(100);

100=(byte ID);  //rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
