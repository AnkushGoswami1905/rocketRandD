/*

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(19200);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  if(digitalRead(7) == HIGH){
  //  Serial.println("test failed1");
  }                     // wait for a second
  digitalWrite(8, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);


  if( digitalRead(7) == LOW )
     Serial.println("test failed2");
  else 
      Serial.println("test passed");

}
