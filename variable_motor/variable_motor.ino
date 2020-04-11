//Spins a motor faster or slower based on the temperature (Fan idea), using a potentiometer to simulate temperautre sensor for now
//Minimum motor analogWrite() = 50

int sensorPin = A1;
int motorPin = 9;
int d = 6000;
double sensorReading;
double motorInput;

void setup() {
  pinMode(9, OUTPUT);

}

void loop() {
  sensorReading = analogRead(sensorPin);
  motorInput = (sensorReading/1023.0)*255.0;
  if (motorInput < 80)
  {
     motorInput = 80;
  }
  analogWrite(motorPin, motorInput);

}


//  analogWrite(motorPin, 60);
//  delay(d);
//  analogWrite(motorPin, 200);
//  delay(d);
//  analogWrite(motorPin, 250);
//  delay(d);
