# Drum Suit

Playin drums can be fun. But, for those who are visually impaired, especially children who want to have fun playing it, the learning curve will be steeper.

With this project, we have created a kit for children that can be used for playing drums with sensor pads attached to their body.

## Ideation

The objective was to create a musical instrument for the differently abled. A lot of ideas were discussed and categorised based on some parameters.

The basic idea behind the device was to use 8 touch sensors to replicate an actual 8 piece drum kit ( Kick,Snare,Hi-Hat,Rack Toms, Floor Tom, Crash and Ride) with audio fed into the central arduino microcontroller which make the exact sounds when pressed. These touch pads would be ergonomically placed on a wearable suit which can be worn and taken off easily.

![ideation](images/IMG_20200217_140744.jpg)

## Paper prototype

This involved figuring out the materials to be used and the basic physical model of how the expected result would be.

After assembling it, we tried it out on a drummer to see how the setup felt like and whether it was feasible for both a visually impaired person and a normal person to play. Turns out the placement of the pads was effective as it replicated the actual positions of the drum kit which guaranteed easy playing.

![](images/IMG_20200218_130324.jpg)

Watch demo of paper prototype [here](https://www.youtube.com/watch?v=JGsgZWZASrY).

## Prototype
### Components Required

1. Arduino Uno
2. Capacitive touch sensors
3. Amplifier
4. Jumper wires
5. Breadboard
6. foam sheet
6. Laptop with Arduino IDE installed

### Prototyping

Jumper wires are connected to the capactive touch sensors and this setup is sanwiched in between cut out foam sheets.
The connections to the arduino are done. The code for processing is given in the file drum_suit.ino and the code for arduino  is given in the drum_suit_arduino.inoin this repository.

![](images/IMG_20200219_190039.jpg)
