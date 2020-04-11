//Reads an analog value and plays a note in the range C4 (261 Hz)
// and B4 (493 Hz)

int sensorPin = A1;
int piezoPin = 8;
double sensorValue;
double freq;
int dif = 493-261;

void setup() {
  // put your setup code here, to run once:
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  shensorValue = analogRead(sensorPin);
  freq = (dif*(sensorValue/1023.0))+261;
  tone(piezoPin, freq);
  
//  Serial.print("Sensor value: ");
//  Serial.print(sensorValue);
//  Serial.print("   Frequency: ");
//  Serial.println(freq);
//  delay(1000);
}
