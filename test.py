import serial
import io

arduino = serial.Serial('COM4', 9600)


while True:
    msg = arduino.readline().strip()
    print(msg)
