# README for MorseCodeTranslator-Improved
*Last updated 25.02.2026*

## Description:
This project can translate morse code to ascii letters and vice versa. 
The input and output is done primarily through the Serial Monitor. 
The morse code is also shown through flashing LEDs (with different colours indicating different things). 
You may also use the potentiometer to adjust the flashing speed of the LEDs. 
The code can also recongise certain commands such as PSV (which shows the current LED flash speed), however, not all commands have been implemented yet. 
It is intended to be used on an arduino with a shield or breadboard with the components listed in the Technology Used section. 
This is an improved version of some code I made around 2(ish) years ago for a similar symbol based language. 
The code has been split up, recommented, rewritten in some places and hopefully had most of the silly beginner mistakes taken out. 
This process only started a week ago but plans are to continue improving and using this program to learn more about Arduino and embedded systems. 


## Technology Used:
This project has been made and tested on a Ardiuno R3 with the following components: 
- 4x LEDs (Red, Orange, Yellow, Green)
- 1x Potentiometer
- 1x Button (not implemented yet)

*(Please Note: This code has been created and tested on Arduino IDE only)*


## Project Status:
Functional but more features will be added soon. 


 



**REFERENCES**
map(), ArduinoDocs, https://docs.arduino.cc/language-reference/en/functions/math/map/
Sketch build process, Arduino CLI, https://arduino.github.io/arduino-cli/1.4/sketch-build-process/#pre-processing 
