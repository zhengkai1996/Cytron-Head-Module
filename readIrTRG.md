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
return Ir TRG defualt value 

## Example ##
reroSensor_HM HM(2,3,8);

byte IrTRG

IrTRG=HM.readIrTRG(100); //reading Ir TRG value form ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
