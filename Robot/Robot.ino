#include <WemosInit.h>
#include <Servo.h>


Servo left;
Servo right;


void setup() {
  left.attach(11);
  right.attach(12);
}

void loop() {
  delay(5000);
  left.write(180);
  right.write(180);
  delay(3000);
  left.write(90);
  right.write(90);
}
