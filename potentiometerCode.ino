//file contains code for taking input fromt the potentiometer. 
#define POTMAX 1023 //potentiometer maximum
#define POTMIN 0 //potentiometer minimum

#define FLASHMAX 300 //Maximum flashing speed of LEDs (in ms)
#define FLASHMIN 15 //Minimum flashing speed of LEDs (in ms)


int potRead(){ 
  int potReading = analogRead(POTPIN); 
  int mappedPotRead = map(potReading, POTMIN, POTMAX, FLASHMIN, FLASHMAX); 
  return mappedPotRead; 
}

