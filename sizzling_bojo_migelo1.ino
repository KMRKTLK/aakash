// C++ code
//
const int led1=3;
const int led2=2;
const int but1=5;
const int but2=7;
int butpos1=0;
int butpos2=0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
}

void loop()
{
  butpos1=digitalRead(but1);
  butpos2=digitalRead(but2);
  if(but1==1)
  {
  digitalWrite(led1, HIGH);
  }
    else{
      // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
    }
    
    if(butpos2==1)
    {
      digitalWrite(led2,HIGH);
    }
    else
    {
      digitalWrite(led2,LOW);

     // Wait for 1000 millisecond(s)
}
  }
  