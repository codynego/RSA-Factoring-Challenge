#!/usr/bin/python3

def find_factor(n):
    factors = []

    for i in range(2, (n//2) + 1):
        if n % i == 0:
            factors.append(i)
    return factors
