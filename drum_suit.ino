import processing.serial.*;
import ddf.minim.*;

Minim minim;
AudioPlayer player;
AudioPlayer player_1;
AudioPlayer player_2;
AudioPlayer player_3;
AudioPlayer player_4;
AudioPlayer player_5;
AudioPlayer player_6;
AudioPlayer player_7;

int lf = 10; // Linefeed in ASCII
String myString = null;
Serial myPort; // The serial port
int sensorValue = 0;

void setup() {
  // Open the port you are using at the rate you want:
  myPort = new Serial(this, Serial.list()[0], 9600);
  myPort.clear();
  // Throw out the first reading, in case we started reading 
  // in the middle of a string from the sender.
  myString = myPort.readStringUntil(lf);
  myString = null;
 // we pass this to Minim so that it can load files from the data directory
 minim = new Minim(this);
 // loadFile will look in all the same places as loadImage does.
 // this means you can find files that are in the data folder and the 
 // sketch folder. you can also pass an absolute path, or a URL.
 // Change the name of the audio file here and add it by clicking on "Sketch —> Import File"
 player = minim.loadFile("one.wav");
 player_1 = minim.loadFile("hihat.wav");
 player_2 = minim.loadFile("one.wav");
 player_3 = minim.loadFile("one.wav");
 player_4 = minim.loadFile("one.wav");
 player_5 = minim.loadFile("one.wav");
 player_6 = minim.loadFile("one.wav");

}

void draw() {
  // check if there is something new on the serial port
  while (myPort.available() > 0) {
  // store the data in myString 
  myString = myPort.readStringUntil(lf);
  // check if we really have something
  if (myString != null) {
    myString = myString.trim(); // let's remove whitespace characters
    // if we have at least one character...
    if(myString.length() > 0) {
       println(myString); // print out the data we just received
       // if we received a number (e.g. 123) store it in sensorValue, we sill use this to change the background color. 
       try {
           sensorValue = Integer.parseInt(myString);
           // As the range of an analog sensor is between 0 and 1023, we need to 
           // convert it in order to use it for the background color brightness
           int brightness = (int)map(sensorValue, 0, 1023, 0, 255);
           background(brightness);
       } catch(Exception e){}
       if(myString.equals("A")){
          if(player.isPlaying() == false){
              player = minim.loadFile("one.wav"); 
              player.play();
          }
       }
       
       if(myString.equals("B")){
          if(player_1.isPlaying() == false){
              player_1 = minim.loadFile("hihat.wav"); 
              player_1.play();
          }
       }
       
       if(myString.equals("C")){
          if(player_2.isPlaying() == false){
              player_2 = minim.loadFile("snare.wav"); 
              player_2.play();
          }
       }
       
       if(myString.equals("D")){
          if(player_3.isPlaying() == false){
              player_3 = minim.loadFile("crash.wav"); 
              player_3.play();
          }
       }
       
       if(myString.equals("E")){
          if(player_4.isPlaying() == false){
              player_4 = minim.loadFile("one.wav"); 
              player_4.play();
          }
       }
       
       if(myString.equals("F")){
          if(player_5.isPlaying() == false){
              player_5 = minim.loadFile("one.wav"); 
              player_5.play();
          }
       }
       
       if(myString.equals("G")){
          if(player_6.isPlaying() == false){
              player_6 = minim.loadFile("one.wav"); 
              player_6.play();
          }
       }
       
       
    }
  }
 }
}
