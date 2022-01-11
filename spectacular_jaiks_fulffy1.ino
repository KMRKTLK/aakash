// C++ code
//
int led;
void setup()
{
  for(int led=2; led<12; led++)
  {
    
  pinMode(led, OUTPUT);
}
  Serial.begin(9600);
}
void loop()
{
  for(int led=1; led<12; led++)
  {
  digitalWrite(led, HIGH);
    Serial.println(digitalRead(led));
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
     Serial.println(digitalRead(led));
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(int led=12; led>1; led--)
  {
   digitalWrite(led, HIGH);
     Serial.println(digitalRead(led));
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
     Serial.println(digitalRead(led));
  delay(1000);
  }
}
