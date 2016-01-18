# READ CLAP COUNT SENSOR() #

## Description ##
This register continuously accumulate the number of hand clap detected. It will wrap around to 0 when the value is more that 255. It does not necessary to be clap, any sound that cause the microphone signal higher than the Mic Threshold will be registered as clap. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readClapCount(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readClapCount(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
