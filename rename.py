import os
import re

for file in os.listdir():
    if re.findall("C\d{1,2}.c",file):
        #print(file)
        newFile = "C0" + file[1:]
        os.replace(file,newFile)