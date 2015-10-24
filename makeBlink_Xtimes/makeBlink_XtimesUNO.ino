int counter = 0;
int pinNumber = 12;
void setup() {

  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
 
  // initialize digital pin 12 as an output.
  pinMode(pinNumber, OUTPUT);

}


// the loop function runs over and over again forever
void loop() {

  delay(1000);
  counter = counter + 1;

    if (counter <=10 ){
     Serial.print("counter value");
     Serial.println(counter);
     make_blink();
    }

}



void make_blink(){
 
      digitalWrite(pinNumber, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);              // wait for a second
      digitalWrite(pinNumber, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);              // wait for a second

}
