//file for code translating ascii letters/numbers to morse code

//translates an individual character to morse
// has to be a pointer because morseLetter/morseNumbers are pointers to chars - if just a char it would just return the first character
char * charToMorse(char character){ 
    
    int asciiVal = int(character); //finding character's ascii value

    if (asciiVal > 96 && asciiVal < 123){ 
      return morseLetters[asciiVal - 97]; //finding the character within morseLetters array
    }
    else if (asciiVal > 47 && asciiVal < 58){ 
      return morseNumbers[asciiVal - 48];  //finding number within the morseNumbers array
    }
    else { 
      return errorChar; 
    }
}



//Creates a morse string and uses charToMorse to translate and add to the morse string
String asciiToMorse(String asciiString){ //possible pointer here?
  
  String morseString = ""; //creating new morse string to return

  asciiString.toLowerCase(); //converting whole string to lowercase

  int stringLength = asciiString.length(); //length of string
  int lastCharPos = (stringLength - 1); //the last character of string
  char spaceCharacter = ' '; 

  for (int i = 0; i < stringLength; i++){ 
    if (asciiString[i] == spaceCharacter){ //if string has a space, add a space to the morse string
      morseString += ' '; 
    }
    else{  //must be a normal character - any errors are delt with in charToMorse
      morseString += charToMorse(asciiString[i]); //adding the morse code translation
      
      if ((i != lastCharPos) && (asciiString[i+1] != spaceCharacter)){ 
        morseString += '/'; //adding a '/' inbetween letters to avoid confusion - don't want them next to spaces or at the end of the message
      }
    }
  }

  return morseString; 
}