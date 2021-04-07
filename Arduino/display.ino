//INITIALISATION
#include <LiquidCrystal.h>
int Contrast=0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);





//PRINT LCD
void lcd_print(char text[] ,int x, int  y, bool clear_line, bool clear_all) {
  if (clear_line == true) {
    lcd.setCursor(0,y);
    //clear all the line
    lcd.print("                ");
  }
  if (clear_all == true) {
    lcd.clear();
  }

  lcd.setCursor(x,y);
  lcd.print(text);
}





//PRINT LCD MOVING CHARACTERS
void lcd_print_move(char text[] ,int x, int  y, int steps, int milliseconds, bool clear_all) {
  if (clear_all == true) {
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

}
