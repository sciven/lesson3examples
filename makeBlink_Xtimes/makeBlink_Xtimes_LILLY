int counter = 0;
int pinNumber = 7;

void setup() {

  
  // initialize digital pin  as an output.
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
