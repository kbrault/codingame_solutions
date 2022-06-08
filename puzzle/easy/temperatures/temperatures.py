import sys
import math

n = int(input())  # the number of temperatures to analyse

if n <= 0 : 
    print(0)
    quit()

closest_zero = 5527

for i in input().split():
    # t: a temperature expressed as an integer ranging from -273 to 5526
    t = int(i)
    
    if abs(t) < abs(closest_zero) :
        closest_zero = t
   
    elif abs(t) == abs(closest_zero) :
        closest_zero = max(t,closest_zero)
        
print(closest_zero)