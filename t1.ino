int led;
void setup()
{
 for(int led=2; led<13 ;led++)
 {
 pinMode(led,OUTPUT); 
 }
}
void loop()
{
  for(int led =2; led<13;led++)
  {
    digitalWrite(led,HIGH);
    Serial.println(digitalRead(led));
    delay(1000);
    digitalWrite(led,LOW);
    Serial.println(digitalRead(led));
    delay(1000);
  }
  for(int led=12; led>=2;led++)
  {
  digitalWrite(led,HIGH);
  Serial.println(digitalRead(led));
    delay(1000);
    digitalWrite(led,LOW);
    Serial.println(digitalRead(led));
    delay(1000);
}
}
