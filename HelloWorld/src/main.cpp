#include <Arduino.h>

void setup() {
  // I, Robert Zaranek, 001161598 certify that this material is my original work.
  // No other person's work has been used without due acknowledgement.

  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello, World!");

  Serial.println("\nName: Robert Zaranek");
  Serial.println("Student ID: 001161598");

  Serial.print("\nESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());

  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
  
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);
  Serial.print("Time: ");

  Serial.println(millis());

}