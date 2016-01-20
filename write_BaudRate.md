# READ WRITE BAUDRATE SENSOR() #

## Description ##
This function sets head module control registers baudrate . 

## Include ##
reroSensor_HM.h

## Prototype ##
byte writeBaudRate(byte ID,byte BR);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID
byte BR; //byte BR is New BaudRate Value
## Returns ##

Frist time Return Ramdom Value

Then Return HM Sensor Reading Error

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

byte Baud

Baud=HM.writeBaudRate(100,103);//Set ID 100 Head Module Sensor to 19200 bps .

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

