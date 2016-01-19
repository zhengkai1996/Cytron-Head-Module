# READ MODEL() #

## Description ##
The two byte register contains ASCII character to recognize the sensor type. ‘H’,’M’ in this case denotes the  Head Module.

## Include ##
reroSensor_HM.h

## Prototype ##
word readModel(ID);
  
## Parameters ##
byte ID; //byte ID is HEAD MODULE SENSOR unique ID

## Returns ##
return model L and model H default value

model L return M

model H return H

## Example ##
reroSensor_HM HM(2,3,8);

char modelHM[3]={0,0,0}; //null terminated string 

word model

model=HM.readModel(100);// read ID 100 control registor

modelHM[1]=(char)model&0x00FF;
  
modelHM[0]=(char)(model>>8);

Serial.println(modelHM);
  
## See Also ##
[errStatus](https://github.com/zhengkai1996/Cytron-Head-Module/blob/wiki/errStatus.md)

