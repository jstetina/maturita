import os
import re

for file in os.listdir():
    if re.findall("C\d{3}.c",file):
        new_file = "C" + file[2:]
        print(new_file)