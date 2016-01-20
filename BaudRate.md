# BaudRate() #

## Description ##
This function is reading baudrate's headmodule sensor 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readBaudRate(byte ID);

## Parameters ##

byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
Return BaudRate Value Data

|RegisterValue(Hex)|BaudRate(bps)|
|:-----------------|:------------|
|3   (0x03)|500,000       |
|4   (0x04)|400,000       |
|7   (0x07)|250,000       |
|9   (0x09)|200,000       |
|16  (0x10)|115,200       |
|34  (0x22)|57,600        |
|103 (0x67)|19,200        |
|207 (0xCF)|9600          |


## Example ##
reroSensor_HM HM(2,3,8);

byte baud;

baud= HM.readBaudRate(100); // read ID 100 control registor BaudRate Value

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)



