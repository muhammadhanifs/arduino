// arduino slave

#define EN12 3
#define IN1 4
#define IN2 5

void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN12, OUTPUT);
}

void loop()
{
  while (Serial.available() > 0)
  {
    int masterValue = Serial.read();
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(EN12, masterValue);
  }
}
