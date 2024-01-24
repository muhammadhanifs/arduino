// arduino master

#define potpin A0

void setup()
{
  Serial.begin(9600);
  pinMode(potpin, INPUT);
}

void loop()
{
  int potValue = analogRead(potpin);
  int speed = map(potValue, 0, 1023, 0, 255);
  Serial.write(speed);
}
