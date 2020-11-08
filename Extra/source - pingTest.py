import PySimpleGUI as sg
import os
import platform

sg.theme('Topanga')

def Ping(serverVar):
    if platform.system() == "Windows":
        response = os.system("ping "+serverVar+" -n 1")
    else:
        response = os.system("ping -c 1" + serverVar)
    isUpBool = False
    if response == 0:
        isUpBool = True
    else:
        isUpBool = False
    return isUpBool

layout = [  [sg.Text('Ping Test \n'+str(Ping("google.com")), size=(20, 2), justification='center')]]

window = sg.Window('Connectivity Monitor 3.0', layout)

while True:
    event, values = window.read()
#    sg.Print("test")
    #something
    
    if event == "Exit" or event == sg.WIN_CLOSED:
        break

window.close()
