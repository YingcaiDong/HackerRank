t = int(input())
dict = {'a':1, 'b':2, 'c':3, 'd':4, 'e':5, 'f':6,'g':7, 'h':8, 'i':9, 'j':10, 'k':11, 'l':12, 'm':13, 'n':14, 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'u':21, 'v':22, 'w':23, 'x':24, 'y':25, 'z':26}

def compair(array):
	index = 1
	flag = False
	for i in range(1, len(array)):
		if dict[array[i]] > dict[array[0]] and dict[array[i]] <= dict[array[index]]:
			index = i
			flag = True
	if flag:
		array[0], array[index] = array[index], array[0]
		array[1:len(array)] = sorted(array[1:len(array)])
	return {'array': array, 'flag': flag}	

for _ in range(0, t):
	line = list(input())
	length = len(line)
	if length == 1:
		print('no answer')
	else:
		result = {}
		for i in range(length-2, -1, -1):
			result = compair(line[i: length])
			if result['flag'] == True:
				result['index'] = i
				break
		if result['flag']:
			line[result['index']:length] = result['array']
			print(*line, sep='')
		else:
			print('no answer')
