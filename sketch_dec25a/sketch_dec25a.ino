# include <Servo.h> 
Servo harunservo;
void setup()
{
  harunservo.attach(9); // servo motorum 9. pinde
}

void loop(){
  harunservo.write(150);
  delay(1);
  if(analogRead(A0) < 250) // LDR ile alakalı.
  {
    harunservo.write(90); // basması.
    delay(100);
  }
  else{
    harunservo.write(150);
    
  }
}
