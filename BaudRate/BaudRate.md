# BaudRate() #

## Description ##
This function is reading baudrate's headmodule sensor 

## Include ##
reroSensor_HM.h

## Prototype ##
byte readBaudRate(byte ID);

## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
byte readbaudRate(100);

100=(byte ID) ;  //100 is rero head module sensor ID

## See Also ##

[Instruction Set](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/instruction%20set.md)

ReturnStatus
