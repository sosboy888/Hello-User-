
import serial
import webbrowser
ser=serial.Serial("PORT_NAME")
while True:
    if(ser.readline().find("User arrived")):
        break
webbrowser.open("https://www.google.com")