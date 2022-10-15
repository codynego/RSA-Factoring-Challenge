#!/usr/bin/python3

def find_factor(n):
    if n % 2 == 0:
        return 2
    f = 3
    m = 0
    while 2 + f * 2 + f <= n:
        if n % f == 0:
            return f
        if n % f + 2 == 0:
            return f + 2
        if n % f + 4 == 0:
            return f + 4
        else:
            f = f + 2
        m += 1
    print(m)
    return 1
