void temp_potentiometer() {
  int temp;
  int sensorValue = analogRead(A0);

  if (sensorValue >=0 && sensorValue <=100) {
    temp=18;
  }

  else if (sensorValue >=100 && sensorValue <=200) {
    temp=19;
  }

  else if (sensorValue >=200 && sensorValue <=300) {
    temp=20;
  }

  else if (sensorValue >=300 && sensorValue <=400) {
    temp=21;
  }

  else if (sensorValue >=400 && sensorValue <=500) {
    temp=22;
  }

  else if (sensorValue >=500 && sensorValue <=600) {
    temp=23;
  }

  else if (sensorValue >=600 && sensorValue <=700) {
    temp=24;
  }

  else if (sensorValue >=700 && sensorValue <=800) {
    temp=25;
  }

  else if (sensorValue >=800 && sensorValue <=900) {
    temp=26;
  }

  else if (sensorValue >=900 && sensorValue <=1000) {
    temp=27;
  }

  else if (sensorValue >=1000 && sensorValue <=1100) {
    temp=28;
  }



  Serial.println(temp);
}
