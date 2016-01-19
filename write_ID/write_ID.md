# READ WRITE ID SENSOR() #

## Description ##
This function is set new ID for Head Module Sensor.

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeID(byte ID,byte NEW ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID
byte NEW ID; //byte NEW ID is HEAD MODULE SENSOR NEW ID

## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error

## Example ##
reroSensor_HM HM(2,3,8);

byte stat;

stat= HM.writeID(100,101); // set ID 100 Head Module Senor to 101 New ID
## See Also ##


[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
