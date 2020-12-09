//Sets up the pins for arduino nano
//Pin 13 as led
int led = 13;
// Pin 12 as ledTwo
int ledTwo = 12;

void setup() {
  // put your setup code here, to run once:
  // Initializes the pins as outputs
  pinMode(led, OUTPUT);
  pinMode(ledTwo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // Turns voltage on High
  delay(500);  // waits 2 seconds
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(ledTwo, HIGH); // Turns voltage on High
  delay(500);  // waits 2 seconds
  digitalWrite(ledTwo, LOW);
  delay(500); 
}
