//INITIALISATION
#include <LiquidCrystal.h>
int Contrast=0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);




//CLEAR LINE FUNCTION
void clear_line(int y) {
  lcd.setCusor(0,y);
  lcd.print("                "); //clear all the line
}



//PRINT LCD
void lcd_print(char text[] ,int x, int  y, bool clear_line, bool clear_all) {
  if (clear_line == true) {
    clear_line(y);
  }
  if (clear_all == true) {
    lcd.clear();
  }

  lcd.setCursor(x,y);
  lcd.print(text);
}



//PRINT LCD MOVING CHARACTERS
void lcd_print_move(char text[] ,int x, int  y, bool clear, int steps, int milliseconds) {
  if (clear == true) {
    lcd.clear();
  }

  }


void setup()
{
   analogWrite(6,Contrast);
   lcd.begin(16, 2);
 }

void loop()
{
  lcd_print("THIS IS A TEST TEXT", 1,0,false, false);
  lcd_print("TEST", 6,1,false);
}
