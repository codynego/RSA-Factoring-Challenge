#!/usr/bin/python3
import sys
from find_factor import find_factor
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
            factor = find_factor(number)

            print(f"{number} = {factor[0]} * {factor[-1]}")
