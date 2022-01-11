int led=8;
void setup() {
  pinMode(led,OUTPUT);
    Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
Serial.println(digitalRead(led));
delay(5000);
digitalWrite(led,LOW);
Serial.println(digitalRead(LOW));
delay(1000);
}
