m, n, r = map(int, input().split())
matrix = []
for index in range(0,m):
	sub_arr = list(map(int, input().strip().split(' ')))
	matrix.append(sub_arr)
		
def unwrap_matrix(start, upr, downl):
	unwrap = []
	for i in range(start[1], upr[1]): #1
		unwrap.append(matrix[start[0]][i])
		
	for i in range(start[0], downl[0]): #2
		unwrap.append(matrix[i][upr[1]])
		
	for i in range(upr[1], start[1], -1):	#3
		unwrap.append(matrix[downl[0]][i])
	
	for i in range(downl[0], start[0], -1): #4
		unwrap.append(matrix[i][start[1]])
		
	return unwrap

def wrap_back(start, upr, downl, array):
	for i in range(start[1], upr[1]): #1
		matrix[start[0]][i] = array.pop(0)
			
	for i in range(start[0], downl[0]): #2
		matrix[i][upr[1]] = array.pop(0)
		
	for i in range(upr[1], start[1], -1): #3
			matrix[downl[0]][i] = array.pop(0)
			
	for i in range(downl[0], start[0], -1): #4
		matrix[i][start[1]] = array.pop(0)
		
flag = True
upl = [0, 0]
upr = [0, n-1]
downl = [m-1, 0]
mi = m-1
ni = n-1
while flag:
    array = unwrap_matrix(upl, upr, downl)
    reminder = r%len(array)
    for index in range(0, reminder):
        temp = array.pop(0)
        array.append(temp)
    wrap_back(upl, upr, downl, array)
	
    if upl[0]+1<m-1 and upl[1]+1<n-1 and \
    upr[0]+1<m-1 and upr[1]-1>upl[1]+1 and \
    downl[0]-1>upl[0]+1 and downl[1]+1<n-1:
        upl[0] += 1
        upl[1] += 1
        upr[0] += 1
        upr[1] -= 1
        downl[0] -= 1
        downl[1] += 1
    else:
        flag = False
for i in range(0,m):
	print(*matrix[i], sep=' ')
