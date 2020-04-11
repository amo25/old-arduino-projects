void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinSet(11);
  
}

void pinSet(int led)
{
  int value;
  if(Serial.available()>0)
  { 
    value = Serial.read();
    if(value == 49 || value == 72 || value == 104)
      digitalWrite(led, HIGH);
    else if(value == 48 || value == 76 || value == 108)
      digitalWrite(led, LOW);
  }
}
