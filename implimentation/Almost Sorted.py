n = int(input())
l = list(map(int, input().strip().split(' ')))

array = []
l_array = []
sorted_array = sorted(l)
for index, number in enumerate(sorted_array):
    if number - l[index] != 0:
        array.append(index+1) # output index start from 1
        l_array.append(l[index])
        
if len(array) == 0:
    print('yes')
elif len(array) == 2:
    print('yes\nswap ', end='')
    print(*array, sep=' ')
elif len(array) > 2:
    negSigCnt = 0
    for index in range(0, len(array)-1):
        if l_array[index] - l_array[index+1] < 0:
            negSigCnt += 1
    if negSigCnt == 0:
        print('yes\nreverse ', end='')
        last = array.pop()
        print(str(array[0])+' '+str(last))
    else:
        print('no')
            
    
