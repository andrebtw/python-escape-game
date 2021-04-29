#importation des librairies importantes

import speech_recognition as sr
import serial
import re
import sys

# MIC CFG
recognizer = sr.Recognizer()

# ARDUINO CFG
import serial

ser = serial.Serial(str(sys.argv[1]))



while True :
    arduino_serial = ser.readline()
    arduino_serial = str(arduino_serial)

    if "recording" in arduino_serial :
        with sr.Microphone() as source:
            ser.write(str.encode('Adjusting Noise'))
            print("Adjusting noise")
            recognizer.adjust_for_ambient_noise(source, duration=1)
            ser.write(str.encode('Recording for 4 seconds'))
            print("Recording for 4 seconds")
            recorded_audio = recognizer.listen(source, timeout=4)
            print("Done recording")
            ser.write(str.encode('Done recording'))

        ''' Recorgnizing the Audio '''
        try:
            print("Recognizing the text")
            ser.write(str.encode('Recognizing the text'))
            text = recognizer.recognize_google(
                    recorded_audio,
                    language="en-US"
                )
            print("Decoded Text : {}".format(text))

            arduino_serial = ser.readline()
            arduino_serial = str(arduino_serial)

            arduino_serial = re.sub("\D","",arduino_serial)

            print(arduino_serial)



        except Exception as ex:
            print(ex)

        arduino_serial=str(arduino_serial)
        text=str(text)

        first_character=arduino_serial[0]
        second_character=arduino_serial[1]

        first_character=int(first_character)
        second_character=int(second_character)

        first_character=first_character**2
        second_character=second_character**2

        final_number=first_character+second_character
        final_number=str(final_number)

        if text in final_number:
            ser.write(str.encode('correct'))
            print("CORRECT")
        else:
            ser.write(str.encode('incorrect'))
            print("INCORRECT")
