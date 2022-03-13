import os
import re

for file in os.listdir():
    if re.findall("C\d{2}.c",file):
        print(file,end=" -> ")
        new_file = "C0" + file[1:]
        print(new_file)
        os.rename(file,new_file)