#importation des librairies importantes

import speech_recognition as sr
import serial
import re
import sys
import time

# MIC CFG
recognizer = sr.Recognizer()

# ARDUINO CFG
import serial


ser = serial.Serial(str(sys.argv[1]))

myvar1="test"


time.sleep(5)

ser.write(str.encode('Ready'))
