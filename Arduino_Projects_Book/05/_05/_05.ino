#include <Servo.h>

Servo servo;
const int potPin = A0;
int potVal = 0;
int angle;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(" angle: ");
  Serial.println(angle);
  
  servo.write(angle);
  delay(15);
}
