import os
import re
import commands

dir = "/Users/sasakiumi/Dropbox/Photos/KaiPhoto"
files = os.listdir(dir)
pattern = re.compile("^.+ 4.JPG$")


for file in files:
    if pattern.match(file):
        cmd = "rm \"" + dir + "/" + file + "\""
        commands.getoutput(cmd)
#        print cmd

    
    
