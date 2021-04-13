import speech_recognition as sr
import serial

# MIC CFG
recognizer = sr.Recognizer()

# ARDUINO CFG
import serial
ser = serial.Serial('COM4')



# Number to Words

# Main Logic
ones = ('Zero', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine')

twos = ('Ten', 'Eleven', 'Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen', 'Seventeen', 'Eighteen', 'Nineteen')

tens = ('Twenty', 'Thirty', 'Forty', 'Fifty', 'Sixty', 'Seventy', 'Eighty', 'Ninety', 'Hundred')

suffixes = ('', 'Thousand', 'Million', 'Billion')

def process(number, index):

    if number=='0':
        return 'Zero'

    length = len(number)

    if(length > 3):
        return False

    number = number.zfill(3)
    words = ''

    hdigit = int(number[0])
    tdigit = int(number[1])
    odigit = int(number[2])

    words += '' if number[0] == '0' else ones[hdigit]
    words += ' Hundred ' if not words == '' else ''

    if(tdigit > 1):
        words += tens[tdigit - 2]
        words += ' '
        words += ones[odigit]

    elif(tdigit == 1):
        words += twos[(int(tdigit + odigit) % 10) - 1]

    elif(tdigit == 0):
        words += ones[odigit]

    if(words.endswith('Zero')):
        words = words[:-len('Zero')]
    else:
        words += ' '

    if(not len(words) == 0):
        words += suffixes[index]

    return words;

def getWords(number):
    length = len(str(number))

    if length>12:
        return 'This program supports upto 12 digit numbers.'

    count = length // 3 if length % 3 == 0 else length // 3 + 1
    copy = count
    words = []

    for i in range(length - 1, -1, -3):
        words.append(process(str(number)[0 if i - 2 < 0 else i - 2 : i + 1], copy - count))
        count -= 1;

    final_words = ''
    for s in reversed(words):
        temp = s + ' '
        final_words += temp

    return final_words
# End Main Logic

#SOURCE CODE FOR CONVERTING NUMBERS INTO LETTERS : https://www.codesansar.com/python-programming-examples/number-words-conversion-no-library-used.htm



while True :
    arduino_serial = ser.readline()
    arduino_serial = str(arduino_serial)

    if "recording" in arduino_serial :
        with sr.Microphone() as source:
            print("Adjusting noise ")
            recognizer.adjust_for_ambient_noise(source, duration=1)
            print("Recording for 4 seconds")
            print("Done recording")

        ''' Recorgnizing the Audio '''
        try:
            print("Recognizing the text")
            text = recognizer.recognize_google(
                    recorded_audio,
                    language="en-US"
                )
            print("Decoded Text : {}".format(text))


        except Exception as ex:
            print(ex)




temp =  open("temp.txt", "r")

temp=temp.read()

temp=str(temp)
temp = temp[:-3]




first_character=temp[0]
second_character=temp[1]

first_character=int(first_character)
second_character=int(second_character)

first_character=first_character**2
second_character=second_character**2

final_number=first_character+second_character

print(final_number)

final_string= getWords(first_character+second_character)


print(final_string)
