#include <Morse.h>

Morse morse(13);

void setup()
{
}

void loop()
{
  //morse.dot(); morse.dot(); morse.dot();
  //morse.dash(); morse.dash(); morse.dash();
  //morse.dot(); morse.dot(); morse.dot();
  //delay(3000);
  //https://en.wikipedia.org/wiki/Morse_code
  char message[6] = "HELLO";
  int i=0;
  while(i<sizeof(message)){
  //char var='A';
  
  char var=message[i];
  switch (var) {
    case 'A':
      {
      morse.dot();  morse.dash();
      }
      break;
      case 'E':
      {
      morse.dot();
      }
      break;
      case 'H':
      {
      morse.dot();morse.dot();morse.dot();morse.dot();
      }
      break;
      case 'L':
      {
      morse.dot();morse.dash();morse.dot();morse.dot();
      }
      break;
      case 'O':
      {
      morse.dash();morse.dash();morse.dash();
      }
      break;
    default:
      // if nothing else matches, do the default
      // default is optional
    break;
  }
  i++;
  delay(1000);
  }
  
  delay(3000);
}
