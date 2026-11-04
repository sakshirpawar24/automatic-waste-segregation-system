
#include <Servo.h>

// Automatic Waste Segregation System
// Sample Arduino UNO implementation

const int IR_PIN = 2;
const int METAL_PIN = 3;
const int MOISTURE_PIN = A0;
const int SERVO_PIN = 9;

const int MOISTURE_THRESHOLD = 500;

// Adjust these angles according to your bin mechanism
const int METAL_ANGLE = 30;
const int WET_ANGLE = 90;
const int DRY_ANGLE = 150;
const int HOME_ANGLE = 90;

Servo binServo;

void setup() {
  Serial.begin(9600);

  pinMode(IR_PIN, INPUT);
  pinMode(METAL_PIN, INPUT);

  binServo.attach(SERVO_PIN);
  binServo.write(HOME_ANGLE);

  Serial.println("Waste Segregation System Started");
}

void loop() {

  int irValue = digitalRead(IR_PIN);

  // Assumption: IR sensor gives LOW when waste is detected
  if (irValue == LOW) {

    delay(300);

    int metalValue = digitalRead(METAL_PIN);
    int moistureValue = analogRead(MOISTURE_PIN);

    Serial.print("Moisture Value: ");
    Serial.println(moistureValue);

    // Priority 1: Metal Waste
    // Assumption: metal detector gives HIGH on detection
    if (metalValue == HIGH) {

      Serial.println("Waste Type: METAL");
      binServo.write(METAL_ANGLE);

    }

    // Priority 2: Wet Waste
    else if (moistureValue > MOISTURE_THRESHOLD) {

      Serial.println("Waste Type: WET");
      binServo.write(WET_ANGLE);

    }

    // Priority 3: Dry Waste
    else {

      Serial.println("Waste Type: DRY");
      binServo.write(DRY_ANGLE);

    }

    delay(2000);

    // Return to home position
    binServo.write(HOME_ANGLE);

    delay(1000);

    // Wait until the waste is removed
    while (digitalRead(IR_PIN) == LOW) {
      delay(100);
    }
  }

  delay(200);
}
