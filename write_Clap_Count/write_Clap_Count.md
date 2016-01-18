# READ WRITE CLAP COUNT SENSOR() #

## Description ##
This function sets head module control registers Clap count sensor . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeClapCount(byte ID,byte CC );

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte writeClapCount(byte 100,byte 150);
100=(byte ID); //100 is rero head module sensor ID
150=(byte CC); //150 is Clap Count Value
## See Also ##

InstructionSet

ReturnStatus
