import PySimpleGUI as sg
import platform
import time
import threading
import subprocess
import playsound

sg.theme('Topanga')
server="www.google.com"
repetitions=0
waitTimeSuccess=300
waitTimeFail=20
waitTime=waitTimeSuccess
textPinging="Pinging "+server+" ...""\n"+"Successful repetitions: "+str(repetitions)
refreshLock=False
#wavFile = input("Enter a wav filename: ")

def incrementProgbarSmooth(importedSleepTime):
	threading.Thread(target=smoothProgbar_thread, args=(window,importedSleepTime), daemon=True).start()

#sound
#server change
#smooth progress bar
#fix gui elements position
#check crossplatform compatibility
#fix timer key

def Ping():
    global server
    if platform.system() == "Windows":
        response = subprocess.check_call("ping "+server+" -n 1", shell=True)
    else:
        response = subprocess.check_call("ping -c 1" + server)
        #response = subprocess.check_call("ping -c 1" + server, shell=True)
    isUpBool = False
    if response == 0:
        isUpBool = True
    else:
        isUpBool = False
    return isUpBool

def statePinging():
    global repetitions
    window["textKey"].update("Pinging "+server+" ...""\n"+"Successful repetitions: "+str(repetitions), text_color='yellow')

def stateSuccess():
    global repetitions
    repetitions=repetitions+1
    window["textKey"].update("Ping successful!"+"\n"+"Successful repetitions: "+str(repetitions), text_color='lightgreen')

def stateFail():
    global repetitions
    repetitions=0
    window["textKey"].update("Ping failed!"+"\n"+"Successful repetitions: "+str(repetitions), text_color='red')

def superSleep(sleepTime):
    i = 0
    global waitTime
    waitTime=sleepTime
    while i<sleepTime:
        time.sleep(1)
        waitTime=waitTime-1
        window["timerKey"].update(waitTime)
        i=i+1
        finishedPercentage=i/sleepTime*100
        window["progbar"].UpdateBar(finishedPercentage)

def ping_thread(window):
    global repetitions
    global waitTimeSuccess
    global waitTimeFail
    while True:
        statePinging()
        time.sleep(1)
        window["progbar"].UpdateBar(0)
        if Ping() == True:
            stateSuccess()
            superSleep(waitTimeSuccess)
        else:
            stateFail()
            superSleep(waitTimeFail)

def refresh_ping_thread(window):
    global repetitions
    global refreshLock
    refreshLock=True
    statePinging()
    time.sleep(1)
    if Ping() == True:
        stateSuccess()
        refreshLock=False
    else:
        stateFail()
        refreshLock=False

buttons = [[sg.Button("Refresh", size=(10, 1))]]
buttons1 = [[sg.T(waitTime, size=(10, 1), justification='center', text_color="gray", key="timerKey")]]
buttons2 = [[sg.Button("Exit", size=(10, 1))]]

def smoothProgbar_thread(window):
	window["progbar"].UpdateBar(finishedPercentage)

layout = [
    [sg.Text(textPinging, size=(40, 2), justification='center', key="textKey")],
    [sg.T()],
    [sg.ProgressBar(100, orientation='h', size=(23.5, 20), key='progbar')],
    [sg.T()],
    [sg.Column(buttons), sg.Column(buttons1, size=(100,40)), sg.Column(buttons2)]
    ]

window = sg.Window('Connectivity Monitor 3.0', layout, element_justification='c', finalize=True, use_default_focus=False)

threading.Thread(target=ping_thread, args=(window,), daemon=True).start()

while True:
    event, values = window.read()

    if event == 'Refresh':
        if refreshLock==False:
            threading.Thread(target=refresh_ping_thread, args=(window,), daemon=True).start()

    if event == "Exit" or event == sg.WIN_CLOSED:
        break

window.close()
