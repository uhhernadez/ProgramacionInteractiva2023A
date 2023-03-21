int encendido = 0;

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

  if (push == HIGH) 
  {
    encendido = (encendido == LOW)? HIGH:LOW;
  }
  
  if (encendido) 
  {
    PrendeLeds();
  }
  else 
  {
    ApagaLeds();
  }
  
}

void PrendeLeds() 
{
    digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
}  

void ApagaLeds() 
{
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
}


void Secuencia (int ind) 
{
  switch(ind)
  { 
  case 0: 
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
    break;
    case 1: 
        digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
    break;
    case 2: 
        digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
    break;
    case 3: break;
    case 4: break;
  }

}
