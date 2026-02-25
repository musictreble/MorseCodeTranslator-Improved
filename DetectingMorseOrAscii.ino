/*File for detecting whether the input is morse or ascii 
  - Uses both translatingAscii.ino and translatingMorseToAscii.ino to translate the message and return it back
*/

char detectMorseOrAscii(String message){ 
  for(int i = 0; i < message.length(); i++){ //going through whole message until we find an indicator
    
    char messChar = message[i]; //getting a single character
    int intMessChar = (int)messChar;  // finding the ascii value

    if((messChar == '.') || (messChar == '-')){ //no special character are allowed so it must be morse
      return 'm';
    }
    else if (((intMessChar < 123) && (intMessChar > 96)) || ((intMessChar > 47) && (intMessChar < 58))){ //checks if character is an ascii character within number and letter ranges
      return 'a'; 
    }
  }
  return '?'; //if whole message is an error, the language will not be detected 
}