// C++ code
//
int led;
void setup()
{
  for(int led=2;led<=13;led++)
  {
  pinMode(led, OUTPUT);
  }
}

void loop()
{
  for(int led=13;led>=2;led--)
 {
     digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(int led=2; led>=13; led--)
  {
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
  }
}
