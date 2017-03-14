#!/bin/python3

import sys


n = int(input().strip())
for a0 in range(n):
    grade = int(input().strip())
    # your code goes here
    if grade < 38:
        print(grade)
    else:
        reminder = grade%10
        tens = int(grade/10)*10
        if reminder >= 0 and reminder < 5:
            diff = tens+5 - grade
            hold = tens+5
        elif reminder >= 5 and reminder < 10:
            diff = tens+10 - grade
            hold = tens+10
        if diff < 3:
            print(hold)
        else:
            print(grade)
            
