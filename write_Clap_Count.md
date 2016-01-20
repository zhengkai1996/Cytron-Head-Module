#WRITE CLAP COUNT SENSOR() #

## Description ##
This function sets head module control registers Clap count sensor . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeClapCount(byte ID,byte CC );

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

byte CC;//byte CC is New Clap Count Value

## Returns ##
Frist time Return Ramdom Value

Then Return HM Sensor Reading Error


## Example ##
reroSensor_HM HM(2,3,8);

byte CC

CC=HM.writeClapCount(100,103) ; set ID 100 Head Module Sensor to 103 Clap Count Value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
