#include <Keypad.h>
#include <Keyboard.h>
#include <Mouse.h>

const int ROWS = 4; //four rows
const int COLUMNS = 3; //three columns


str keys[ROWS][COLUMNS] = {
  {'a','b','c'},
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};

byte pin_rows[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte pin_column[COLUMNS] = {5, 4, 3}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROWS, COLUMNS );

void setup(){
  Serial.begin(9600);
  Keyboard.begin();
  Mouse.begin()
}

void loop(){
  
  char key = keypad.getKey();
//I call this one the "I'm tired and I can't think but I want to finished this "
  if (key == 'a'){
    Keyboard.write(KEY_PAGE_DOWN);
  }
  if (key == 'b'){
    Keyboard.write(KEY_INSERT);
  }
  if (key == 'c'){
    Keyboard.write(KEY_PAGE_UP);
  }
////////////
  if (key == '1'){
    Mouse.click(MOUSE_RIGHT);
  }
  if (key == '2'){
    Keyboard.write('p');
  }
  if (key == '3'){
    Keyboard.write('e');
  }
//////////////
  if (key == '4'){
    Keyboard.write('-');
  }
  if (key == '5'){
    Keyboard.write('2');
  }
  if (key == '6'){
    Keyboard.write('+');
  }
/////////////
  if (key == '7'){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('s');
    Keyboard.releaseAll();
  }
  if (key == '8'){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT;
    Keyboard.write('z');
    Keyboard.releaseAll();
  }
  if (key == '9'){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('z');
    Keyboard.releaseAll();
  }
}























