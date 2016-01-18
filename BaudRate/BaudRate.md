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
|3   (0x03)|500,000       |Used to obtain a status packet|
|4   (0x04)|400,000       |Read values from Control Register|
|7   (0x07)|250,000       |Write values to Control Register|
|9   (0x09)|200,000       |Similar to WRITE\_DATA instruction but pending execution until iACTION Instruction is called|
|16  (0x10)|115,200       |Triggers the pending action registered by REG\_WRITE instruction|
|34  (0x22)|57,600        |Resetting the Control Register values to factory defaults|
|103 (0x67)|19,200        |Controlling multiple G15 in one single instruction packet|
|207 (0xCF)|9600          |Controlling multiple G15 in one single instruction packet|


## Example ##
byte stat
stat=byte readBaudRate(100); // read ID 100 control registor BaudRate Value

## See Also ##

[Instruction Set](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/instruction%20set.md)


