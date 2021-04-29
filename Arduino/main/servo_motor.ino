void servo_motor() {
  motor.write(0);
  delay(1000);
  motor.write(25);
  delay(1000);
}
