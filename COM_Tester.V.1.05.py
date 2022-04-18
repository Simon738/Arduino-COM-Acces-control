import serial
import time

arduino = serial.Serial(port='COM5', baudrate=9600, timeout=0)
time.sleep(0)

for x in range(2):
    arduino.write(str.encode('1'))
    print("Sending 1")
    time.sleep(1)
    arduino.write(str.encode('2'))
    print("Sending 2")
    time.sleep(1)
    arduino.write(str.encode('3'))
    print("Sending 3")
    time.sleep(1)
    arduino.write(str.encode('4'))
    print("Sending 4")
    time.sleep(1)