#include <reroSensor_HM.h>

#include "reroSensor_HM.h"
#include <SoftwareSerial.h>
reroSensor_HM HM(2,3,8);
char modelHM[3]={0,0,0};  //null terminated string     
void setup() {
Serial.begin(9600);
HM.begin(19200);
pinMode(8,OUTPUT);
delay(1000);// put your setup code here, to run once:

}

void loop() 
{
  word model=HM.readModel(100);
  modelHM[1]=(char)model&0x00FF;
  modelHM[0]=(char)(model>>8);
  Serial.print("Check Head Module Infared Error:");
  Serial.println(HM.errStatus);
  

   if (HM.errStatus>0) { 
    Serial.println("HM Reading Error!");
    }
  else
  {
      Serial.print("Model Value:");
    Serial.println(modelHM);
  }
  delay(1000);
  
}
