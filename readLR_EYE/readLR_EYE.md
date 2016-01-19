# READ LR EYE SENSOR() #

## Description ##
Eye LR register control whether both eyes or single eye is turned on. Two least significant bits of the register control left and right eye respectively.

## Include ##
reroSensor_HM.h

## Prototype ##
byte readLR(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return LR eye value

|bit|7  |6  |5  |4  |3  |2  |1  |0  |
|:--|:--|:--|:--|:--|:--|:--|:--|:--|
|||||||||Right Eye|Left Eye|


## Example ##
byte LR

LR=HM.readLR(100); //reading LR Lens form ID 100 Head Module Sensor

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
