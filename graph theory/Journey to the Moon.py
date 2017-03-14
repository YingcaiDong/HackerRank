n,l = map(int, input().split())
a1 = []
b1 = []
for i in range(l):
    ar = []
    a,b = map(int, input().strip().split(' '))
    ar.extend((a,b))
    a1.append(ar)    
    b1.extend((a,b))
b1 = list(set(b1))
i = 0
while i < len(a1):
    j=i+1
    while j < len(a1):
        if len(a1[i] + a1[j]) > len(list(set(a1[i] + a1[j]))):
            a1.append(list(set(a1[i] + a1[j])))
            a1.pop(i)
            a1.pop(j-1)
            j = i+1
        else:
            j +=1
    i += 1
total = 0
for i in range(len(a1)):
    for j in range(i+1,len(a1)):
        total = total + len(a1[i])*len(a1[j])
le = len(b1)
rest = (n-le)*(n-le-1)/2 + (n-le)*le + total
print(int(rest))
