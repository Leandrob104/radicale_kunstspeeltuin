
const int buttonPin = 2;     
const int ledPin =  3;     

int buttonState = 0;        
void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {

  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);

  if (buttonState == HIGH) {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
 // knipper effect
  delay(500);
}
