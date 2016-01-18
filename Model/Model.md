# READ MODEL() #

## Description ##
The two byte register contains ASCII character to recognize the sensor type. ‘H’,’M’ in this case denotes the  Head Module.

## Include ##
reroSensor_HM.h

## Prototype ##
word model=HM.readModel(ID);
  modelHM[1]=(char)model&0x00FF;
  modelHM[0]=(char)(model>>8);
  
## Parameters ##
none

## Returns ##
Error status in byte. If return is non-zero, error occurred. Refer ReturnStatus.

## Example ##
word model=HM.readModel(100);
modelHM[1]=(char)model&0x00FF;
modelHM[0]=(char)(model>>8);
  
## See Also ##

InstructionSet

ReturnStatus
