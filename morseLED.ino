//File contains methods for controlling the LEDs 

//dot time will be used as a unit of time to ensure all time length are uniform with the potentiometer input.
int dotTime; 

//translates morse code to LED flashes 
void morseToLED(String message){ 
  
  //finding set led speed
  dotTime = potRead();

  for(int i = 0; i < message.length(); i++){ 

    if(message[i] == '.'){ 
      activateLED(YELLOWPIN, dotTime); 
    }
    else if(message[i] == '-'){ 
      activateLED(ORANGEPIN, (3*dotTime)); 
    }
    else if(message[i] == ' '){ //end of word
      delay(dotTime); 
    }
    else if(message[i] == '/'){ //space
      delay(3*dotTime);
    }
    else{ //must be error
      activateLED(REDPIN, dotTime); 
    }

  }

  activateLED(GREENPIN, (5*dotTime)); //indicates the end of a message

}

//method for lighting up LEDs 
void activateLED(int led, int activeTime){ 
  digitalWrite(led, HIGH); 
  delay(activeTime); 
  digitalWrite(led, LOW); 
  delay(dotTime);
}



