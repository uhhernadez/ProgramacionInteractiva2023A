// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int push = digitalRead(7);
  //digitalWrite(8, HIGH);
  //digitalWrite(9, HIGH);
  //digitalWrite(10, HIGH);
  if(push) 
  {
    digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  else 
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
}
