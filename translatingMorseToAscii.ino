//File for translating morse to ascii letters/numbers` 


//translates individual morse letters to ascii Characters
char morseToChar(String morseChar){ 
  if(morseChar == "" || morseChar == " "){ //if just a space is given it returns a space.
    return ' '; 
  }
    
  char character;

  //Going through whole letter morse code list to find a match.
  for (int i = 0; i < ALPHALENGTH; i++){ 

    //for letters
    if (morseChar.equals(morseLetters[i])){ 
      character = char(i+97); 
      return character; //stops and returns when match found.
    }
  }
  
  //for numbers
  for (int i = 0; i < NUMBERLENGTH; i++){ 

    if(morseChar.equals(morseNumbers[i])){ 
      character = char(i + 48);
      return character; //stops and returns when match found.
    }

  }

  //if nothing is returned, it must be an error - using a question mark to indicate errors.
  return '?';   
}


//using morseToChar to translate morse letter by letter
String morseToAscii(String morseStr){ 
  String result = ""; 
  String currentStr = ""; //temporary string used to hold morse to be translated

  for (int i = 0; i < morseStr.length(); i++){ 
    
    //if current character is a morse code character, it is added to currentStr
    if ((morseStr[i] == '-') || (morseStr[i] == '.')){  
      currentStr += morseStr[i]; 
    }

    //if the current character is a space then it is the end of the word.
    else if (morseStr[i] == '/'){ 
      result += morseToChar(currentStr); //currentStr is translated and added to result
      currentStr = ""; //currentStr is cleared, ready for next string
    }

    else if (morseStr[i] == ' '){  
      result += morseToChar(currentStr); //currentStr is translated and added to result
      result += " "; //adding a space to the result string
      currentStr = ""; //currentStr is cleared, ready for next string
    }
    else{  //its an error 
      result += "?"; //Using question mark to indicate an error
      currentStr = ""; //clearing erroreous morse
    }
  }
  //end of word, add the last letter in currentStr
  result += morseToChar(currentStr);
  
  return result;
}