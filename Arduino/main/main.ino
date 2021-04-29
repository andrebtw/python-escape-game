#include <LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);







const int info_button = 8;
const int mic_button = 9;
const int servo_pin = 7; 

int info_state = 0;
int mic_state = 0;

int contrast=0;


Servo motor; 

void setup(){
  analogWrite(6, contrast);
  lcd.begin(16, 2);

  Serial.begin(9600);
  pinMode(info_button, INPUT);
  pinMode(mic_button, INPUT);
  motor.attach(servo_pin); 
}


void loop(){
  verify ();
  
  info_state=digitalRead(info_button);
  mic_state=digitalRead(mic_button);

  if (info_state==HIGH) {
      info();
      delay(3000);
    }
  else if (mic_state==HIGH) {
    rec();
    delay(700);
  }

  else {
      temp_potentiometer();
      delay(50);
  }
}
