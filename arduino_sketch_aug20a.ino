/*void setup() {
  // put your setup code here, to run once:
 pinMode(D4,OUTPUT);
}

void loop()
 {
  // put your main code here, to run repeatedly:
   digitalWrite(D4,HIGH);
   delay(1000);
   digitalWrite(D4,LOW);
   delay(1000);

}*/
void setup() {
  // put your setup code here, to run once:
 pinMode(D4,OUTPUT);
}
#include<stdio.h>
void loop()
 {
  for(int i=0;i<10;i++)
  {
  // put your main code here, to run repeatedly:
   digitalWrite(D4,HIGH);
   delay(1000);
   digitalWrite(D4,LOW);
   delay(1000);
}
 ESP.deepSleep(0);
 }