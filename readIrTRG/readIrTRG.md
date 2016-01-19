# READ IR TRG SENSOR() #

## Description ##
This register is set to 1 when the MIC VAL is greater than the MIC Threshold else it is 0. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readIrTRG(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return

## Example ##
byte readIrTRG(100);
100=(byte ID); //100 is rero head module sensor ID

## See Also ##

InstructionSet

ReturnStatus
