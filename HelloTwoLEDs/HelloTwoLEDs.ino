int GREEN_LED = 9;
int RED_LED = 10;

int GREEN_ON_TIME = 500;
int GREEN_OFF_TIME = 500;
int NUM_GREEN_BLINKS = 1;

int RED_ON_TIME = 200;
int RED_OFF_TIME = 200;
int NUM_RED_BLINKS = 1;

String RED_BLINK_MSG = "Blinking RED LED";
String GREEN_BLINK_MSG = "Blinking GREEN LED";

void blinkLED(int pin, int onTime, int offTime) {
  digitalWrite(pin, HIGH);
  delay(onTime);
  digitalWrite(pin, LOW);
  delay(offTime);
}

void setup() {
  Serial.begin(9600);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.println("How many times to blink RED LED?");
  while (!Serial.available()) {
    // NOTHING DOING
  }
  NUM_RED_BLINKS = Serial.parseInt();
  Serial.println("Blinking RED LED " + String(NUM_RED_BLINKS) + " times");
}

void loop() {
  for (int i = 0; i < NUM_RED_BLINKS; i++) {
    blinkLED(RED_LED, RED_ON_TIME, RED_OFF_TIME);
    Serial.println(RED_BLINK_MSG);
  }
  for (int i = 0; i < NUM_GREEN_BLINKS; i++) {
    blinkLED(GREEN_LED, GREEN_ON_TIME, GREEN_OFF_TIME);
    Serial.println(GREEN_BLINK_MSG);
  }
}
