#include <reroSensor_HM.h>

#include "reroSensor_HM.h"
#include <SoftwareSerial.h>
reroSensor_HM HM(2,3,8);
void setup() {
Serial.begin(9600);
HM.begin(19200);
pinMode(8,OUTPUT);
delay(1000);// put your setup code here, to run once:

}

void loop() 
{
  byte RGB=HM.factoryReset(100);
  Serial.print("Check Head Module Infared Error:");
  Serial.println(HM.errStatus);
  
   
   if (HM.errStatus > 0) {
    Serial.println("Factory Reset ERROR!");
  }
  else
  {
    Serial.print("Factory Reset Success!");
  }
  delay(1000);
  
}

