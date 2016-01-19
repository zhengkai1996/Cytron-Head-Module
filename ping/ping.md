# PING() #

## Description ##
To request the status packet from a head module sensor. The data byte is passed by pointer and it will be overwritten with ID of the sensor if successful.

## Include ##
reroSensor_HM.h

## Prototype ##
byte ping(void);

## Parameters ##
none

## Returns ##
if 0 return headmodule sensor unique ID

if 1 return HM reading error
## Example ##
byte ping();

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)
