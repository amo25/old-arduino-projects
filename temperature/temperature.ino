int sensorPin = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  double sensorValue = analogRead(sensorPin);
  double voltage = (sensorValue/1023.0)*5.0;
  double degreesCelsius = (voltage-.5)*100.0;
  double degreesFarenheight = degreesCelsius*(9.0/5.0)+32;
  Serial.print("Sensor Value = ");
  Serial.print(sensorValue);
  Serial.print("   Voltage = ");
  Serial.print(voltage);
  Serial.print("   Degrees Celsius = ");
  Serial.print(degreesCelsius);
  Serial.print("   Degrees Farenheight = ");
  Serial.println(degreesFarenheight);
  delay(10000);
}
