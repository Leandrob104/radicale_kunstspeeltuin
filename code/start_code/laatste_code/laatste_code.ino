const int ledPin = 8;
const int buttonPin = 2;

 

void setup()
{
  pinMode(ledPin,OUTPUT); 
  pinMode(buttonPin,INPUT_PULLUP);
}

 

void loop()
{
  int digitalVal = digitalRead(buttonPin); 

 

  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); 
  }
  else
  {
    digitalWrite(ledPin,HIGH);
    
  }
}
