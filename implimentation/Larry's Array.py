t = int(input())
for _ in range(0, t):
    n = int(input())
    l = list(map(int, input().strip().split(' ')))
    
    makeChanges = True
    while makeChanges:
        makeChanges = False
        for i in range(1, n+1):
            index = i-1
            if index+2<=len(l)-1 and l[index] != i:
                temp = {}
                temp['value'] = l[index]-i
                temp['order'] = [l[index], l[index+1], l[index+2]]
                if temp['value'] > l[index+1]-i:
                    temp['value'] = l[index+1]-i
                    temp['order'] = [l[index+1], l[index+2], l[index]]
                if  temp['value'] > l[index+2]-i:
                    temp['order'] = [l[index+2], l[index], l[index+1]]
                l[index:index+3] = temp['order']
                makeChanges = True
    flag = False            
    for i in range(1, n+1):
        index = i-1
        if l[index] != i:
            print('NO')
            flag = True
            break
    if not flag:
        print('YES')
    
