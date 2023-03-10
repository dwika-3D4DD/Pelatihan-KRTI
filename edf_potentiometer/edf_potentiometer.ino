#include <Servo.h>  //memasukkan library servo
Servo esc;  //membuat objek esc dari library Servo
int pot = A0; //membuat variabel pot ke pin A0 arduino

void setup() {
  pinMode (pot, INPUT);  //variabel pot di set ke Input
  esc.attach(5);  //data esc ke pin 5
  //Serial.begin (9600);
}

void loop() {
  int input = analogRead(pot); /*membuat variabel sensorValue dan memberi variabel nilai potensiometer
                                  berupa nilai analog pada pin A0 arduino*/
  //Serial.println(input);
  input = map (input, 0, 1023, 0, 255); //mengubah nilai sensorValue menjadi nilai digital
  esc.write (input);  //menulis nilai input pada objek esc
  delay(1); //delay 1 milisecond agar stabil 
}
