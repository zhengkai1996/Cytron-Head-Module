# READ CLAP COUNT SENSOR() #

## Description ##
This register continuously accumulate the number of hand clap detected. It will wrap around to 0 when the value is more that 255. It does not necessary to be clap, any sound that cause the microphone signal higher than the Mic Threshold will be registered as clap. 


## Include ##
reroSensor_HM.h

## Prototype ##
byte readClapCount(byte ID);

## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return Clap Count Value 

## Example ##
reroSensor_HM HM(2,3,8);

byte ClapCount

ClapCount=HM.readClapCount(100); //reading ID 100 Head Module Clap Count Value 

## See Also ##

[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

