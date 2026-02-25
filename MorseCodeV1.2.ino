//This is the main file for this morse code translator
//Contains pin set up and defines, variables and arrays used globally. 


//LEDs
#define REDPIN 5
#define ORANGEPIN 6
#define YELLOWPIN 9
#define GREENPIN 10
#define BLUEPIN 11

//Potentiometer 
#define POTPIN A0  

//Array lengths
#define ALPHALENGTH 26
#define NUMBERLENGTH 10


//letters - ascii 97 to 122
/*has to be a pointer as it returns multiple characters
    - could use a 2d array but this uses less RAM */
char* morseLetters[ALPHALENGTH] = {
  ".-",
  "-...",
  "-.-.",
  "-..",
  ".",
  "..-.",
  "--.",
  "....",
  "..",
  ".---",
  "-.-",
  ".-..",
  "--",
  "-.",
  "---",
  ".--.",
  "--.-",
  ".-.",
  "...",
  "-",
  "..-",
  "...-",
  ".--",
  "-..-",
  "-.--",
  "--.."
};



//numbers - ascii 48 to 57
/*has to be a pointer as it returns multiple characters
    - could use a 2d array but this uses less RAM */
char* morseNumbers[NUMBERLENGTH]{
  "-----",
  ".----",
  "..--",
  "...--",
  "....-",
  ".....",
  "-....",
  "--...",
  "---..",
  "----.",
};

char* errorChar = ".......";  //to be returned if character is not recognised.





void setup() {
  Serial.begin(9600);  //setting baud rate

  //setting up LEDs as outputs    
  pinMode(REDPIN, OUTPUT);
  pinMode(ORANGEPIN, OUTPUT);  
  pinMode(YELLOWPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  //Setting potentiometer as input
  pinMode(POTPIN, INPUT); 

  menuInfo(); 

}

void loop() {

  Serial.println("Please enter your next message: ");

  while(!Serial.available()){}; 

  promptInput();

}
