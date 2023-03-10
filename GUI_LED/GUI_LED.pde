import controlP5.*; // import library controlP5
import processing.serial.*;  //import library serial

ControlP5 cp5;  // membuat objek cp5
PFont font;  //membuat objek font

Serial port;  //membuat objek port

void setup(){ 
  size (300, 350); // membuat jendela baru (panjang, lebar)
  
  printArray(Serial.list());  //print semua serial port
  
  port = new Serial (this, "COM4", 9600);  //terhubung dengan port, disini menngunakan port3
  
  cp5 = new ControlP5 (this);
  font = createFont ("calibri bold", 20);  //membuat font baru ("nama font", ukuran)
  
  cp5.addButton ("on")  // nama tombol "on"
  .setPosition(93, 50)  // koordinat x, y
  .setSize (130, 50)    // ukuran (panjang, lebar)
  .setFont(font) 
  ;
  
  cp5.addButton ("off")  // nama tombol "off"
  .setPosition(93, 120)  // koordinat x, y
  .setSize (130, 50)    // ukuran (panjang, lebar)
  .setFont(font)
  ;
  
  cp5.addButton ("blinkFast")  // nama tombol "blinkFast"
  .setPosition(93, 190)  // koordinat x, y
  .setSize (130, 50)    // ukuran (panjang, lebar)
  .setFont(font)
  ;
  
  cp5.addButton ("blinkSlow")  // nama tombol "blinkSlow"
  .setPosition(93, 260)  // koordinat x, y
  .setSize (130, 50)    // ukuran (panjang, lebar)
  .setFont(font)
  ;
}

void draw (){ 
   background (10, 0, 10); //membuat warna background (r g,b) dengan nilai 0 sampai 255 
   
   //judul windows
   fill (0, 255, 0); //warna text (r, g, b)
   textFont(font);  //mengubah font
   text("LED Control", 110, 30); // membuat text ("text", koordinat x, koordinat y)
}

//membuat fungsi untuk button
void on(){
  port.write('a');  // objek port menulis 'a'
}

void off(){
  port.write ('b');  //objek port menulis 'b'
}

void blinkFast(){
  port.write('c');  //objek port menulis 'c'
}

void blinkSlow(){
  port.write('d');  //objek port menulis 'd'
}
