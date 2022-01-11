int led1=8;
int led2=9;
int led3=10;
int led4=11;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(5000);
digitalWrite(led1,LOW);
delay(1000);
digitalWrite(led2,HIGH);
delay(5000);
digitalWrite(led2,LOW);
delay(1000);
digitalWrite(led3,HIGH);
delay(5000);
digitalWrite(led3,LOW);
delay(1000);
digitalWrite(led4,HIGH);
delay(5000);
digitalWrite(led4,LOW);
delay(1000);

}
