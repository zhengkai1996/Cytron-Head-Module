# READ WRITE RGB () #

## Description ##
This function sets head module RGB control registers  . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeRGB(byte ID,byte colour);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte colour; //byte Ir is HEAD MODULE SENSOR NEWcolour value


|bit|7  |6  |5  |4  |3  |2  |1  |0  |
|:--|:--|:--|:--|:--|:--|:--|:--|:--|
|colour|red|red|red|green|green|green|blue|blue|blue|


## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error


## Example ##
reroSensor_HM HM(2,3,8);

byte RGB

RGB= HM.writeRGB(100,101); // set ID 100 Head Module Senor to 101 RGB value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
