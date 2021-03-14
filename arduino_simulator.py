from tkinter import *
import tkinter
import asyncio

temp=25.55

gui = Tk(className='ARDUINO SIMULATION')
gui.geometry("800x500")
gui.configure(bg='black')


async def taking_temp_activate():
    f = open("temp.txt", "w")
    f.write(temp)
    f.close()





taking_temps = tkinter.Button(gui, text="TEMP", bg="blue", width=20, height=5)
taking_temps.place(x=20, y=200)

info = tkinter.Button(gui, text="INFOS", bg="red", width=20, height=5)
info.place(x=630, y=200)



gui.mainloop()
