# -*- coding: utf-8 -*-
"""
Created on Tue May 29 16:14:20 2018

@author: BB-8
"""
from urllib import request

thinkspeak_url = 'https://thingspeak.com/channels/505127/feed.csv'

def download_ultrasonic_data(csv_url):
    response = request.urlopen(csv_url)
    csv = response.read()
    csv_str = str(csv)
    lines = csv_str.split ("\\n")
    dest_url = r'thinkspeak.csv'
    fx = open(dest_url, "w")
    for line in lines:
        fx.write(line +"\n")
    fx.close()

download_ultrasonic_data(thinkspeak_url)    