# -*- coding: utf-8 -*-
"""
Created on Thu May 31 05:54:18 2018

@author: BB-8
"""

from urllib import request

firebase_url = 'https://octapod-9d999.firebaseio.com/.json?print=pretty&format=export&download=octapod-9d999-export.json&auth=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpYXQiOjE1Mjc3MjU5NjEsImV4cCI6MTUyNzcyOTU2MSwidiI6MCwiYWRtaW4iOnRydWV9.A0gqnrJ_2yEimZglHLmCdaF3v2q4YJTujKrXE9jb2yc
'

def download_ultrasonic_data(json_url):
    response = request.urlopen(json_url)
    json = response.read()
    json_str = str(json)
    lines = json_str.split ("\\n")
    dest_url = r'firebase.json'

#https://octapod-9d999.firebaseio.com/.json?print=pretty&format=export&download=octapod-9d999-export.json&auth=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpYXQiOjE1Mjc3MjU5NjEsImV4cCI6MTUyNzcyOTU2MSwidiI6MCwiYWRtaW4iOnRydWV9.A0gqnrJ_2yEimZglHLmCdaF3v2q4YJTujKrXE9jb2yc



import json
import csv

f = open('data.json')
data = json.load(f)
f.close()
f = open('data.csv')
csv_file = csv.writer(f)
for item in data:
    f.writerow(item)

f.close()