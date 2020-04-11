void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int k = 0; k<=255; k++)
  {
      analogWrite(10, k);
      delay(10);
  }
  for (int k = 255; k>= 0; k--)
  {
     analogWrite(10, k);
     delay(10);
  }
}
