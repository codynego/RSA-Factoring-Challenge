#!/usr/bin/python3

def find_prime(n):
    prime = []
    
    for i in range(2, n):
        if i == 2 or i == 3 or i == 5:
            prime.append(i)
            continue
        if i % 2 == 0 or i % 3 == 0 or i % 5 == 0:
            continue
        else:
            prime.append(i)
    return (prime)
