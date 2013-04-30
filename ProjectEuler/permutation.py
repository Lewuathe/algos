#!/home/lewuathe/installed/anaconda/bin/python


def nthBase(n, nth, digit):
    """ Convert base number """
    res = ""
    quotient  = n
    remainder = 0
    
    if n == 0 :
        res = "0"
        
    while quotient > 0 :
        quotient  = n / nth
        remainder = n % nth
        res = str(remainder) + res
        n = quotient

    while len(res) < digit :
        res = "0" + res

    return res

def repetitionFilter(numString):
    """ Remove numbers which has same digits"""
    t = set()
    if [ x for x in numString if x in t or t.add(x)] :
        return True
    else:
        return False

def genPermutation(n, r):
    """ Make permutations nHr"""
    res = []
    last = pow(n, r)

    for i in xrange(last) :
        target = nthBase(i, n, r)
        if not repetitionFilter(target):
            res.append(target)

    return res


# Permutation Test
if __name__ == "__main__":
    print genPermutation(5, 3)
    a = "031"
    print repetitionFilter(a)
