void temp_potentiometer() {
  int temp;
  int sensorValue = analogRead(A0);

  if (sensorValue >=0 && sensorValue <=100) {
    temp=20.05;
  }

  else if (sensorValue >=100 && sensorValue <=200) {
    temp=20.55;
  }

  else if (sensorValue >=200 && sensorValue <=300) {
    temp=21.05;
  }

  else if (sensorValue >=300 && sensorValue <=400) {
    temp=21.55;
  }

  else if (sensorValue >=400 && sensorValue <=500) {
    temp=22.05;
  }

  else if (sensorValue >=500 && sensorValue <=600) {
    temp=22.55;
  }

  else if (sensorValue >=600 && sensorValue <=700) {
    temp=23.05;
  }

  else if (sensorValue >=700 && sensorValue <=800) {
    temp=23.55;
  }

  else if (sensorValue >=800 && sensorValue <=900) {
    temp=24.05;
  }

  else if (sensorValue >=900 && sensorValue <=1000) {
    temp=24.55;
  }

  else if (sensorValue >=1000 && sensorValue <=1100) {
    temp=25.05;
  }



  Serial.println(temp);
}
