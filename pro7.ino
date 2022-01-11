// C++ code
//
  int butpos1=0;
  int butpos3=0;
  int butpos2=0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(7, INPUT);

    

}

void loop()
{
 butpos1=digitalRead(5);
  butpos2=digitalRead(6);
 butpos3=digitalRead(7);
  if(butpos1==1)
  {
  digitalWrite(2, HIGH); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, LOW); // Wait for 1000 millisecond(s)
  }
 if(butpos2==1)
  {
  digitalWrite(2, LOW); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); // Wait for 1000 millisecond(s)
  }
 if(butpos3==1)
  {
  digitalWrite(2, LOW); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH); // Wait for 1000 millisecond(s)
  }
  if(butpos2==1&&butpos1==1)
  {
  digitalWrite(2, HIGH); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); // Wait for 1000 millisecond(s)
  }
 if(butpos2==1&&butpos3==1)
  {
  digitalWrite(2, LOW); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); // Wait for 1000 millisecond(s)
  }
  if(butpos3==1&&butpos1==1)
  {
  digitalWrite(2, HIGH); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH); // Wait for 1000 millisecond(s)
  }
}
 
  
  
