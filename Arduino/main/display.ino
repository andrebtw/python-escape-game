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
