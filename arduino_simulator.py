from tkinter import *
import tkinter

gui = Tk(className='ARDUINO SIMULATION')
gui.geometry("800x500")
gui.configure(bg='black')



taking_temps = tkinter.Button(gui, text="TEMP", bg="blue", width=20, height=5)
taking_temps.place(x=20, y=200)

info = tkinter.Button(gui, text="INFOS", bg="red", width=20, height=5)
info.place(x=630, y=200)





gui.mainloop()
