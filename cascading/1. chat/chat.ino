#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);

void setup() {
  Serial.begin(9600);
  while (!Serial) { }
  mySerial.begin(9600);
  mySerial.println("ira");

}

void loop() {
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (mySerial.available())
    mySerial.write(Serial.read());

}
