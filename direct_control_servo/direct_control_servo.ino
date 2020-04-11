#include <Servo.h>
Servo serv;
double pot;
double pos;


void setup() {
  // put your setup code here, to run once:
  serv.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot = analogRead(A1);
  pos = ((pot/1023.0)*178)+1; //limited range to 1-179 because makes worrying buzzing as limits are reached
  serv.write(pos);
  //delay(20);
}
