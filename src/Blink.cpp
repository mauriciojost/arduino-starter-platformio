/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

int val = 0;

void setup() {
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(OUT_PWM, 155);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  analogWrite(OUT_PWM, 10);
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(500);

  analogWrite(OUT_PWM, 255);
  delay(500);



  val = analogRead(A0);
  Serial.println(val);
}
