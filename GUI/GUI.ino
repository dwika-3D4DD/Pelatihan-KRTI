int led = 13; //variabel led pada pin 13 arduino

void setup() {
  pinMode (led, OUTPUT);  //mode led di set ke output
  Serial.begin(9600); //untuk memulai komunikasi serial
}

void loop() {
  if (Serial.available()) {  //mendapatkan jumlah byte (karakter) yang tersedia untuk dibaca dari port serial
    char val = Serial.read(); //membuat variabel val dengan nilai pembacaan dari serial

    switch (val) {  
      case 'a':
        //jika val = a, maka led on
        digitalWrite(led, HIGH);
        break;

      case 'b' :
        //jika val = b, maka led off
        digitalWrite (led, LOW);
        break;

      case 'c' :
        //jika val = c, maka led blink cepat
        digitalWrite (led, HIGH);
        delay (100);
        digitalWrite (led, LOW);
        break;

      case 'd':
        //jika val = d, maka led blink lambat
        digitalWrite (led, HIGH);
        delay (1000);
        digitalWrite (led, LOW);
        break;
    }
  }
}
