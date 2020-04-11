int ser = 2;
int memA = 3;
int memB = 4;
int out = 5;
int del = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(memA, OUTPUT);
  pinMode(memB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  activateMem();
  digitalWrite(ser, HIGH);
  deactivateMem();
  activateMem();
  digitalWrite(ser, LOW);
  deactivateMem();
  activateMem();
  digitalWrite(ser, HIGH);
  deactivateMem();
  activateMem();
  digitalWrite(ser, HIGH);
  deactivateMem();
  digitalWrite(out, HIGH);
  delay(del);
  digitalWrite(out, LOW);
  delay(5000); 
}

void activateMem()
{
   digitalWrite(memA, HIGH);
   digitalWrite(memB, HIGH);
   digitalWrite(13, HIGH);
   delay(del);
}

void deactivateMem()
{
  digitalWrite(memA, LOW);
  digitalWrite(memB, LOW);
  digitalWrite(13, LOW);
  delay(del);
}  
