#!/usr/bin/python3
from find_factor import find_factor
from is_prime import is_prime
def factorize(n):
    fact = []
    m = find_factor(n)
    for factor in m:
        if is_prime(factor):
            fact.append(factor)
    return (fact)


a = 831713
b = 795827
mul = a * b
print(mul)
print(factorize(mul))
