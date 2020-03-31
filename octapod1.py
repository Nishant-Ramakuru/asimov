# -*- coding: utf-8 -*-
"""
Created on Fri Nov  3 15:08:45 2017

@author: BB-8
"""
print("initial position")
print("setting current position as origin")
x=0
y=0
f=0
l=0
r=0
b=0
w=1
while w==1:
    f=int(input('enter the value on the front'))
    if f<5:
        print("wall ahead")
        print("checking left")
        l=int(input('enter the vale on the left'))
        if l<5:
            print("wall on the left")
            print("checking right")
            r=int(input('enter the value on the right'))
            if r<5:
                print("wall on the right")
                print("checking back")
                b=int(input('enter the value on the back'))           
                if b<5:
                    print("no way out")
                else:
                    print("no wall on the back side")
                    print("moving backwards")
                    y=y-1
            else:
                print("no wall on the right side")
                print("moving right")
                x=x+1
        else:
            print("no wall on the left side")
            print("moving left")
            x=x-1                    
    else:
        print("no wall ahead")
        print("moving ahead")
        y=y+1


