const int info_button = 8;
const int mic_button = 9;

int info_state = 0;
int mic_state = 0;



void setup(){
  Serial.begin(9600);
  pinMode(info_button, INPUT);
  pinMode(mic_button, INPUT);
}



void loop(){
  info_state=digitalRead(info_button);
  mic_state=digitalRead(mic_button);

  if (info_state==HIGH) {
      Serial.print("INFO");
      /*info();*/
    }
  if (mic_state==HIGH) {
    Serial.print("REC");
    /*rec();*/
  }
}
