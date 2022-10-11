#!/usr/bin/python3
from factorize import factorize
from find_factor import find_factor
def two_fact(number):
    factors = find_factor(number)
    factor = []
    
    j = -1
    if len(factors) < 2:
        factor.append([factors[0], factors[0]])
    for i in range(len(factors) // 2):
        a = factors[i]
        b = factors[j]
        j = j - 1
        fact = [a,b]
        factor.append(fact)
    return factor




"print(two_fact(22345634598985))
