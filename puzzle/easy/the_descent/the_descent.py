import sys
import math

while True:
    max, max_m = 0,0

    for i in range(8):
        mountain_h = int(input())  # represents the height of one mountain.

        if max < mountain_h : 
            max = mountain_h
            max_m = i

    print(max_m)