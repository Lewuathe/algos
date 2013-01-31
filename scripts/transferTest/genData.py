import os
import sys

if __name__ == '__main__':
    argvs = sys.argv
    argc = len(argvs)
    print 'lines: ' + argvs[1]

    f = open('testFile.txt', 'w');
    for i in range(0, int(argvs[1])) :
        f.writelines('Thisis10B\n');
        
    f.close()

    
    
