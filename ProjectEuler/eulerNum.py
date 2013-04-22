#!/home/lewuathe/installed/anaconda/bin/python

def GCD(m, n) :
    """ Return Gratest Common Divisor with euclidean algorithm """
    if n == 0 :
        return m
    else :
        return GCD(n, m%n)

def isRelPrime(m, n) :
    """ Whether there are coprime integers between m and n """
    if GCD(m, n) == 1:
        return True
    else:
        return False

def eulerNum(n) :
    """ Euler number is the number of coprime integers with itself """
    num = 0
    for i in range(1, n) :
        if isRelPrime(n, i) :
            num = num + 1
            
    return num

if __name__ == "__main__":
    print eulerNum(99)
