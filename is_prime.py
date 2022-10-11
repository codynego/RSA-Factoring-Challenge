#!/usr/bin/python3

def is_prime(n):
    const_prime = [2,3,5]
    if n not in const_prime:
        if n % 2 == 0 or n % 3 == 0 or n % 5 == 0:
            return False
        else:
            return True
    else:
        return True
