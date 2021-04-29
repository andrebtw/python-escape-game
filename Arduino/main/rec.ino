void rec () {
  Serial.println("recording");
  lcd.clear();
  
  lcd_print("Adjusting noise", 0,0, false, true);
  delay(2000);
  lcd.clear();
  lcd_print("Recording for", 2,0, false, true);
  lcd_print("4 seconds", 3,1, false, false);
  delay(4000);
  lcd.clear();
  lcd_print("Recognizing", 2,0, false, true);
  lcd_print("the text", 5,1, false, false);
  delay(1000);
  lcd.clear();
}

void verify () {
  String incoming;
  incoming = Serial.readString();

  if(incoming == "correct") {
    
    lcd.clear();
    lcd_print("CORRECT", 3,0, false, true);
    delay(2000);
    servo_motor();
  }

  else if(incoming == "no") {
    lcd_print("INCORRECT", 3,0, false, true);
    lcd_print("TRY AGAIN", 3,0, false, false);
    delay(2000);
  } 
  }
