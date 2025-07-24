int Dot = 1000;
int Dash = 2000;
int Flash = 500;

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
        delay(Dot);
        digitalWrite(7,LOW); 
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // B: -...
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // D: -..
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // U: ..-
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // L: .-..
      // PIN 7 MAIN LED 
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dash);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // -: -
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // A: .-
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW); 
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // L: .-..
      // PIN 7 MAIN LED 
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dash);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
          digitalWrite(7,HIGH);
          delay(Dot);
          digitalWrite(7,LOW);
          delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // E: .
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // E: .
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);  
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
  // double flash after first name
    // PIN 8 INDICATOR LED
      digitalWrite(8,HIGH);
      delay(Flash);
      digitalWrite(8,LOW);
      delay(Flash);
      digitalWrite(8,HIGH);
      delay(Flash);
      digitalWrite(8,LOW);
      delay(Flash);
  // last name 
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // O: ---
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // H: ....  
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // A: .-
      // PIN 7 MAIN LED
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW); 
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // M: --
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // E:
       // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED 
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
    // D: -..
      // PIN 7 MAIN LED 
        digitalWrite(7,HIGH);
        delay(Dash);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
        digitalWrite(7,HIGH);
        delay(Dot);
        digitalWrite(7,LOW);
        delay(Flash);
      // PIN 8 INDICATOR LED
        digitalWrite(8,HIGH);
        delay(Flash);
        digitalWrite(8,LOW);
        delay(Flash);
  // triple flash after full name
    // PIN 8 INDICATOR LED
      digitalWrite(8,HIGH);
      delay(Flash);
      digitalWrite(8,LOW);
      delay(Flash);
      digitalWrite(8,HIGH);
      delay(Flash);
      digitalWrite(8,LOW);
      delay(Flash);
      digitalWrite(8,HIGH);
      delay(Flash);
      digitalWrite(8,LOW);
      delay(Flash);
}
