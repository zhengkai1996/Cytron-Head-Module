# FactoryReset() #

## Description ##
This function resets head module control registers values to factory default. This includes ID and baudrate. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte factoryReset(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
 return packet from sensor
 
if return 0 ,serial monitor print out Factory Reset ERROR!

if return 1,serial monitor print out Factory Reset Success!

## Example ##
reroSensor_HM HM(2,3,8);

byte stat;

stat= HM.factoryReset(100); // read ID 100 control register factory Reset

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

