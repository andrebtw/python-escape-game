int info_count=1;

//text , x,  y, clear_line, clear_all

void info() {
    Serial.println("info");
    if (info_count == 1) {
      lcd_print("YOU MUST GET THE", 0, 0, false, true);
      lcd_print("TEMPERATURE", 2, 1, false, false);
      info_count=2;
      }

    else if (info_count == 2) {
      lcd_print("TAKE THE SQUARE", 0, 0, false, true);
      lcd_print("OF EACH DIGIT", 1, 1, false, false);
      info_count=3;
      }
    else if (info_count == 3) {
      lcd_print("AND MAKE THE SUM", 0, 0, false, true);
      lcd_print("OF THE 2 DIGITS", 0, 1, false, false);
      info_count=4;
      }
    else if (info_count == 4) {
      lcd_print("SAY IT LOUD", 2, 0, false, true);
      lcd_print("WITH YOUR VOICE", 0, 1, false, false);
      info_count=1;
      }
  }
