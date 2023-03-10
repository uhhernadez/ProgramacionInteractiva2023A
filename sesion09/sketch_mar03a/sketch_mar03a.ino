int encendido = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int push = digitalRead(7);
  int potenciometro = analogRead(A0);  // read the input pin
  Serial.println(potenciometro);
  
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
  
  delay(200);
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
