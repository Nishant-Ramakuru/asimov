# -*- coding: utf-8 -*-
"""
Created on Wed May 30 12:29:05 2018

@author: BB-8
"""


from urllib import request

i=int(input("enter"))
#print(i);
if i==1:
    data1=request.urlopen("https://api.thingspeak.com/update?api_key=T0KRZ8I4W8NZGRBH&field5="+str(100))
    print(data1);
    print("moving left");
if (i==2):
    data2=request.urlopen("https://api.thingspeak.com/update?api_key=T0KRZ8I4W8NZGRBH&field5="+str(200))
    print(data2);
    print("moving forward");
if (i==3):
    data3=request.urlopen("https://api.thingspeak.com/update?api_key=T0KRZ8I4W8NZGRBH&field5="+str(300))
    print(data3);
    print("moving right");
if (i==4):
    data4=request.urlopen("https://api.thingspeak.com/update?api_key=T0KRZ8I4W8NZGRBH&field5="+str(400))
    print(data4);
    print("moving backward");

    
    
    




