// C++ code
//

int butpos1=0;
int butpos2=0;
int butpos3=0;
int butpos4=0;
int butpos5=0;
int butpos6=0;
int butpos7=0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}

void loop()
{
  butpos1=digitalRead(5);
  butpos2=digitalRead(6);
  butpos3=digitalRead(7);
 butpos4=digitalRead(8);
  butpos5=digitalRead(9);
 butpos6=digitalRead(10);
 butpos7=digitalRead(11);
 if(butpos1==1)
  {
  digitalWrite(2, HIGH);
 }
  else 
  {
    digitalWrite(2,LOW);
  }
    if(butpos2==1)
  {
  digitalWrite(3,HIGH); 
} 
  else
  {
    digitalWrite(3,LOW);
  }
   if(butpos3==1)
  {
  digitalWrite(4,HIGH);
}
  else
  {
    digitalWrite(4,LOW);
  }
 if(butpos4==1)
 {
  digitalWrite(2, HIGH);
  digitalWrite(3,HIGH);
}
else
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}
  if(butpos5==1)
  {
  digitalWrite(2, HIGH);
    digitalWrite(4,HIGH);
}
else
{
 digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
} 
  if(butpos6==1)
  {
  digitalWrite(3,HIGH);
    digitalWrite(4,HIGH); 
  }
  else
  {
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}
  if(butpos7==HIGH);
{
  digitalWrite(2, HIGH);
  digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  delay(1000);
}
}