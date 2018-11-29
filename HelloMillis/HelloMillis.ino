const int LEDPin = 13;
int LEDState = LOW;
unsigned long prevMillis = 0;   // Last blink time
const long waitInterval = 2000; // Blink every waitInterval ms

void setup() { pinMode(LEDPin, OUTPUT); }

void loop() {
  unsigned long currMillis = millis();
  if (currMillis - prevMillis >= waitInterval) {
    prevMillis = currMillis;
    if (LEDState == LOW) {
      LEDState = HIGH;
    } else {
      LEDState = LOW;
    }
    digitalWrite(LEDPin, LEDState);
  }
}
