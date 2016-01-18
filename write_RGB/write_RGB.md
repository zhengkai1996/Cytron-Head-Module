# READ WRITE RGB () #

## Description ##
This function sets head module RGB control registers  . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeRGB(byte ID,byte colour);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeRGB(byte 100,byte 0);
100=(byte ID); //100 is rero head module sensor ID
0=(byte colour); //0bit is Blue Colour
## See Also ##

InstructionSet

ReturnStatus
