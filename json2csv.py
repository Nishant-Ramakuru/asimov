# -*- coding: utf-8 -*-
"""
Created on Thu May 31 06:05:04 2018

@author: BB-8
"""

import csv
import json

infile = open('C:\Users\BB-8\Downloads\octapod-9d999-export.json','r')
outfile = open('C:\Users\BB-8\Downloads\data.csv','w')

writer = csv.writer(outfile)

for row in json.loads(infile.read()):
    writer.writerow(row)
    
