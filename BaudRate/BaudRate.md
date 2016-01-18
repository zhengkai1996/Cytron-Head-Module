# BaudRate() #

## Description ##
This function is reading baudrate's headmodule sensor 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readBaudRate(byte ID);

## Parameters ##

Parameter1 ；
Starting address data to be read;
Parameter2 ；
Length of data in byte to be read;

## Returns ##
Return BaudRate Val

|RegisterValue(Hex)|BaudRate(bps)|Error(%)|
|:-----------------|:------------|:-------|
|3   (0x03)|500,000       |0|
|4   (0x04)|400,000       |0|
|7   (0x07)|250,000       |0|
|9   (0x09)|200,000       |0|
|16  (0x10)|115,200       |2.12|
|34  (0x22)|57,600        |-0.79|
|103 (0x67)|19,200        |0.16|
|207 (0xCF)|9600          |0.16|


## Example ##
byte stat
stat=byte readBaudRate(100); // read ID 100 control registor BaudRate Value

## See Also ##

[Instruction Set](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/instruction%20set.md)


