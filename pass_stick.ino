    
#include "DigiKeyboard.h"

void setup() {
  //empty
}

void loop() {
  int key_press_delay = 55; //ms
  char passwd[] = "BasePassword";
    
  int chatarrlength = strlen(passwd);
  
  for (int i = 0; i < chatarrlength; i++) {
    DigiKeyboard.delay(key_press_delay);
    DigiKeyboard.print(passwd[i]);
  }
    
  DigiKeyboard.delay(key_press_delay);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(key_press_delay);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
