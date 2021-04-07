#include <LiquidCrystal.h>
int Contrast=0;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void lcd_print(char text[] ,int x, int  y, bool clear) {
  if (clear == true) {
    lcd.clear();
  }

  lcd.setCursor(x,y);

  lcd.print(text);

}


 void setup()
 {
   analogWrite(6,Contrast);
   lcd.begin(16, 2);
  }

void loop()
{
  lcd_print("THIS IS A TEST TEXT", 4,0,true);
}
