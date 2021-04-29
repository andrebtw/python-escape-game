import speech_recognition as sr
import serial
import re
import sys

# MIC CFG
recognizer = sr.Recognizer()

# ARDUINO CFG
import serial

ser = str(sys.argv[1])



while True :
    arduino_serial = ser.readline()
    arduino_serial = str(arduino_serial)

    if "recording" in arduino_serial :
        print("it is actually recording xd")
        with sr.Microphone() as source:
            print("Adjusting noise ")
            recognizer.adjust_for_ambient_noise(source, duration=1)
            print("Recording for 4 seconds")
            recorded_audio = recognizer.listen(source, timeout=4)
            print("Done recording")

        ''' Recorgnizing the Audio '''
        try:
            print("Recognizing the text")
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
            print("CORRECT")
        else:
            print("nope xd")
