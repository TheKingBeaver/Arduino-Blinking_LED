// Blinking LED

const int LED = 13; // LED connected to digital pin 13

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(LED, HIGH);
  delay(5);
  digitalWrite(LED, LOW);
  delay(50);
}
