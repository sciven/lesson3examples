int counter = 0;
void setup() {

  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
 
  // initialize digital pin 12 as an output.
  pinMode(12, OUTPUT);

}


// the loop function runs over and over again forever
void loop() {

  delay(1000);
  make_blink();
  
}



void make_blink(){
 
      digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);              // wait for a second
      digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);              // wait for a second

}
