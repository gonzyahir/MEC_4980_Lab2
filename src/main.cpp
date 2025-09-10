#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting Reads");
}

int ledBrightness = 0;

void loop() {
  // put your main code here, to run repeatedly:
  delay(250);  

  int reading = analogRead(A0);
  Serial.print("Result: ");
  Serial.print(reading);
  Serial.println("");

  analogWrite(LED_BUILTIN, 255 - reading/8);
} 

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}