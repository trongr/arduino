int LEDPin = 9;
int onTime = 100;
int offTime = 900;

void setup() { pinMode(LEDPin, OUTPUT); }

void loop() {
  digitalWrite(LEDPin, HIGH);
  delay(onTime);
  digitalWrite(LEDPin, LOW);
  delay(offTime);
}
