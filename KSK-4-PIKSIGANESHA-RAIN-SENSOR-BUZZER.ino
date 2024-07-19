const int analogPin = A0;   // Pin connected to the analog output of the rain sensor
const int digitalPin = 2;   // Pin connected to the digital output of the rain sensor
const int buzzerPin = 8;    // Pin connected to the buzzer

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud rate
  pinMode(digitalPin, INPUT);  // Set digital pin as input
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  int analogValue = analogRead(analogPin);   // Read the analog value from the rain sensor
  int digitalValue = digitalRead(digitalPin); // Read the digital value from the rain sensor

  // Print the values to the Serial Monitor
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print("  |  Digital Value: ");
  Serial.println(digitalValue);

  // Sound the buzzer if rain is detected (analog value <= 600) and the button is not pressed
  if (analogValue <= 600) {
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
    Serial.println("Rain detected! Buzzer ON.");
    delay(1000);
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
  }

  delay(1000);  // Wait for a second before reading again
}
