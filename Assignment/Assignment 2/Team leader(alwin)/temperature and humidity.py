#Build a python code, Assume u get temperature and humidity values (generated with a
#random function to a variable) and write a condition to detect an alarm in case of high
#temperature continuously.!




import random

import time

while True:

    t=random.randint(25,200)

    print(t,"degree")

    h=random.randint(0,100)

    print("Temperatrure in celsius: " +str(((t-32)*5)//9)+"℃")

    print("The humidity is",h,"%")

    time.sleep(5)
