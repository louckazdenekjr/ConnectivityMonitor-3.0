import PySimpleGUI as sg
import platform
import time
import threading
import subprocess
from playsound import playsound

sg.theme('Topanga')
server="www.google.com"
repetitions=0
waitTimeSuccess=300
waitTimeFail=20
waitTime=waitTimeSuccess
textPinging="Pinging "+server+" ...""\n"+"Successful repetitions: "+str(repetitions)
refreshLock=False
wavFile = "extra/alert.wav"

def incrementProgbarSmooth(importedSleepTime):
	threading.Thread(target=smoothProgbar_thread, args=(window,importedSleepTime), daemon=True).start()

def Ping():
    global server
    if platform.system() == "Windows":
        try: response = subprocess.check_call("ping "+server+" -n 1", shell=True)
        except: return
    else:
        try: response = subprocess.check_call("ping -c 1 " + server, shell=True)
        except: return
    isUpBool = False
    if response == 0:
        isUpBool = True
    else:
        isUpBool = False
    return isUpBool

def doublePing():
    if Ping() == True:
        return True
    else:
        time.sleep(10)
        return Ping()

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
    threading.Thread(target=sound_thread, args=(window,), daemon=True).start()

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
        if doublePing() == True:
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
    if doublePing() == True:
        stateSuccess()
        refreshLock=False
    else:
        stateFail()
        refreshLock=False

def sound_thread(window):
    playsound(wavFile)

buttons = [[sg.Button("Refresh", size=(10, 1))]]
waitTimer = [[sg.T(waitTime, size=(10, 1), justification='center', text_color="gray", key="timerKey")]]
buttons2 = [[sg.Button("Exit", size=(10, 1))]]

def smoothProgbar_thread(window):
	window["progbar"].UpdateBar(finishedPercentage)

layout = [
    [sg.Text(textPinging, size=(40, 2), justification='center', key="textKey")],
    [sg.T()],
    [sg.ProgressBar(100, orientation='h', size=(30, 20), key='progbar')],
    [sg.T()],
    [sg.Column(buttons), sg.Column(waitTimer, size=(100,25)), sg.Column(buttons2)]
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
