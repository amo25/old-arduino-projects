int red = 11;
int green = 10;
int blue = 9;
int pm = A1;
double anr;
int y;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  anr = analogRead(pm);
  if (anr>852.5)
  {
    y = 852.5;
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, inputVal(y));
  }
  else if (anr>682)
  {
    y = 682;
    analogWrite(red, inputVal(y));
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }
  else if (anr>511.5)
  {
    y = 511.5;
    analogWrite(red, 0);
    analogWrite(green, 255);
    analogWrite(blue, 255-inputVal(y));
  }
  else if (anr>341)
  {
    y = 341;
    analogWrite(red, 0);
    analogWrite(green, inputVal(y));
    analogWrite(blue, 255);
  }
  else if (anr>170.5)
  {
    y = 170.5;
    analogWrite(red, 255-inputVal(y));
    analogWrite(green, 0);
    analogWrite(blue, 255);
  }
  else
  {
    y = 0;
    analogWrite(red, 255);
    analogWrite(green, 0);
    analogWrite(blue, inputVal(y));
  }
}

int inputVal(int n)
{
  int val = ((anr-n)/170.5)*255;
  return val;
}
