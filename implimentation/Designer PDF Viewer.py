#!/bin/python3

import sys


h = list(map(int, input().strip().split(' ')))
word = input().strip()
alph = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
dict = {}
for index, letter in enumerate(alph):
	dict[letter] = h[index]
regBig = 0
for letter in word:
	if dict[letter] >= regBig:
		regBig = dict[letter]
print(str(regBig*len(word)))
