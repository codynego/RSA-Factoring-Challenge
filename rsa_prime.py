#!/usr/bin/python3
import sys
import os
from factorize import factorize
if __name__ == "__main__":
    lenght = len(sys.argv)
    if lenght < 2:
        print("USAGE: ./factor <file_name>")

    else:
        file_path = sys.argv[1]
        file = open(file_path, 'r')
        
        for line in file:
            line = line.strip()
            number = int(line)
            factor = factorize(number)

            print(f"{number} = {factor[0]} * {factor[-1]}")
