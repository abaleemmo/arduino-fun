void setup() {
  
  pinMode(7,OUTPUT);
  // pin 7 is the main LED that will be blinking the morse code for my name
  // it will blink for a second for a dot, and a 2 seconds for a dash
  pinMode(8,OUTPUT);
  // pin 8 is the other LED that indicates that the main LED has gone through a letter, gone through my first name, or gone through my entire name
    // one flash of the pin 8 LED means that the letter is done 
    // two flashes of the pin 8 LED means that the first name is done
    // three flashes of the pin 8 LED means that it has completed my name

}

void loop() {
  // first name 
    // A: .-
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW); 
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // B: -...
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // D: -..
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // U: ..-
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // L: .-..
      // PIN 7 MAIN LED 
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(2000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // -: -
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // A: .-
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW); 
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // L: .-..
      // PIN 7 MAIN LED 
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(2000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
          digitalWrite(7,HIGH);
          delay(1000);
          digitalWrite(7,LOW);
          delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // E: .
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // E: .
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);  
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
  // double flash after first name
    // PIN 8 INDICATOR LED
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
  // last name 
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // O: ---
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // H: ....  
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // A: .-
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW); 
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // E:
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
    // D: -..
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(2000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
  // triple flash after full name
    // PIN 8 INDICATOR LED
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
}
