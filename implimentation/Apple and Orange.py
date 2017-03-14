#!/bin/python3

import sys


s,t = input().strip().split(' ')
s,t = [int(s),int(t)]
a,b = input().strip().split(' ')
a,b = [int(a),int(b)]
m,n = input().strip().split(' ')
m,n = [int(m),int(n)]
apple = [int(apple_temp) for apple_temp in input().strip().split(' ')]
orange = [int(orange_temp) for orange_temp in input().strip().split(' ')]
apple2house = s-a
orange2house = b-t
houselen = t-s

applecnt = 0
orangecnt = 0
cnt = 0
for index in range(0,m):
    if apple[index] >= apple2house and apple[index] <= apple2house+houselen:
        cnt += 1
print(cnt)
cnt = 0
for index in range(0,n):
    if orange[index] < 0 and abs(orange[index]) >= orange2house and abs(orange[index]) <= orange2house+houselen:
        cnt+= 1
print(cnt)
