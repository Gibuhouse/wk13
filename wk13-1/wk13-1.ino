const int ledCount = 10;    // the number of LEDs in the bar graph

int ledPins[] = { 
  2, 3, 4, 5, 6, 7,8,9,10,11 };   // an array of pin numbers to which LEDs are attached


void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); 
  }
}

void loop() {


  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount-5; thisLed++) {
    digitalWrite(ledPins[thisLed],HIGH);
     digitalWrite(ledPins[9-thisLed],HIGH);
    delay(60);
    digitalWrite(ledPins[thisLed],LOW);
        digitalWrite(ledPins[9-thisLed],LOW);
    } 
 for (int thisLed = ledCount-7; thisLed > 0; thisLed--) {
    digitalWrite(ledPins[9-thisLed],HIGH);
     digitalWrite(ledPins[thisLed],HIGH);
    delay(60);
    digitalWrite(ledPins[9-thisLed],LOW);
        digitalWrite(ledPins[thisLed],LOW);
    } 
 }
 


