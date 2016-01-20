# READ IR SENSOR() #

## Description ##
This register records the IR value at current time. IR value is sampled at frequency of 200Hz. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readIr(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return packet from sensor for read IR value

## Example ##
byte IR

IR=HM.readIr(100); //reading Ir value for ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
