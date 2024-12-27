/*Remember if you want to connect  to your arduino uno board then you have to output pins in this code pin 13 
 but in this case i used BUILTIN pin as i am not testing this code in the arduino uno but only in the arduino ide only. 
 below code shows the real wired in pin for led blinking test case but the uncommented one is for universal test in ide without 
 using the board. */  

/* #define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
*/

void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  // Wait for 500 milliseconds

  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  // Wait for 500 milliseconds
}
