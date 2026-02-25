//this file handles user input and messages given to user


void menuInfo(){ 

  Serial.println(" "); 

  Serial.println("Messages/Commands may be inputted using morse or ascii letters (both uppercase and lowercase allowed)"); 

  Serial.println("Input 'PSV' to find current LED flashing speed"); 
}


//handles the user input
void promptInput(){ 

  String inputMessage = Serial.readString(); 
  inputMessage.toLowerCase(); 
    
  String translatedMessage; 

  Serial.println(inputMessage);
  
  char morseDetection = detectMorseOrAscii(inputMessage);

  if(morseDetection == 'm'){
    
    translatedMessage = morseToAscii(inputMessage); 

    Serial.println(translatedMessage);
    morseToLED(inputMessage); 

    command(translatedMessage); //checking if message was a command
  }
  else if(morseDetection == 'a'){ 
    
    translatedMessage = asciiToMorse(inputMessage); 
    
    Serial.println(translatedMessage); 
    morseToLED(translatedMessage);

    command(inputMessage); //checking if message was a command
  }
  else{ //must be the error
    Serial.println("Could not identify language"); 
  }
  
}


//handles finds commands
void command(String message){ 
  if (message == "psv"){    
    Serial.println("LED flash speed is: "); 
    Serial.println(potRead());
  }
}

