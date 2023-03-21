import processing.serial.*;
import cc.arduino.*;

Arduino arduino;
int ledPin = 13;
int back = 0;

void setup()
{
  size(512,512);
  println(Arduino.list());
  println(Arduino.list().length);
  arduino = new Arduino(this, Arduino.list()[2], 57600);
  arduino.pinMode(8, Arduino.OUTPUT);
  arduino.pinMode(9, Arduino.OUTPUT);
  arduino.pinMode(10, Arduino.OUTPUT);
  arduino.pinMode(7, Arduino.INPUT);
}

void draw()
{
  int val = arduino.digitalRead(7);
 
  back+=val;
  background(back);
  
  arduino.digitalWrite(8, Arduino.HIGH);
  arduino.digitalWrite(9, Arduino.HIGH);
  arduino.digitalWrite(10, Arduino.HIGH);
  delay(10);
    arduino.digitalWrite(8, Arduino.LOW);
  arduino.digitalWrite(9, Arduino.LOW);
  arduino.digitalWrite(10, Arduino.LOW);
  delay(10);
}
