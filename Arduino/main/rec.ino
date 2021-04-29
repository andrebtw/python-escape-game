void rec () {
  Serial.println("recording");

  String incoming;
  incoming = Serial.readString();

  if(incoming == "Adjusting noise") {
    lcd_print("Adjusting noise", 0,0, false, true);
    delay(1000);
  }

  if(incoming == "Recording for 4 seconds") {
    lcd_print("Recording for", 2,0, false, true);
    lcd_print("4 seconds", 3,1, false, false);
    delay(4000);
  }

  if(incoming == "Done recording") {
    lcd_print("Done recording", 2,0, false, true);
    lcd_print("4 seconds", 3,1, false, true);
    delay(500);
  } 

  if(incoming == "Recognizing the text") {
    lcd_print("Recognizing", 2,0, false, true);
    lcd_print("the text", 5,1, false, false);
    delay(500);
  }

  if(incoming == "Done recording") {
    lcd_print("Done recording", 2,0, false, true);
    lcd_print("4 seconds", 3,1, false, true);
    delay(500);
  }

  if(incoming == "correct") {
    lcd_print("CORRECT", 3,0, false, true);
    delay(100);
    servo_motor();
  }

  if(incoming == "incorrect") {
    lcd_print("INCORRECT", 3,0, false, true);
    lcd_print("TRY AGAIN", 3,0, false, false);
  }

}
