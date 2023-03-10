#include <Servo.h>//memasukkan library Servo
Servo myServo;//membuat objek myServo dari library Servo

void setup() {
  myServo.attach(3);//data servo ke pin 3 arduino
}

void loop() {
  int sensorValue = analogRead(A0);/*membuat variabel sensorValue dan 
                                      memberi variabel nilai potensiometer
                                      berupa nilai analog pada pin A0 arduino*/
  sensorValue = map(sensorValue, 0, 1023, 0, 255);//mengubah nilai sensorValue menjadi nilai digital
  myServo.write(sensorValue);//menulis nilai sensorValue yang baru pada objek myServo

  delay(1);//delay 1 milisecond agar stabil     
}
