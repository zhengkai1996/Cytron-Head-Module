# READ RGB MODE() #

## Description ##
This register reading the color of rero head eye’s LED. 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readRGB(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
Return RGB defualt value

|bit|7  |6  |5  |4  |3  |2  |1  |0  |
|:--|:--|:--|:--|:--|:--|:--|:--|:--|
|colour|red|red|red|green|green|green|blue|blue|blue|

## Example ##
reroSensor_HM HM(2,3,8);

byte RGB；

RGB=HM.readRGB(100);//100 is rero head module sensor ID



## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

