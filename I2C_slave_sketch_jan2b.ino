//I2C Communication Protocol Practice 
//Controller Reader (Peripheral Sender Sketch)
#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(8);
  Wire.onRequest(requestEvent);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Wire.write("Hello ");
  delay(500);
}

void requestEvent() {
  Wire.write("Hello ");
  Serial.println("Sent");
}
