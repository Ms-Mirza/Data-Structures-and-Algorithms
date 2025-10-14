li = [1, 3, 10, 6, 7, 2, 8, 11, 12, 9]

for i in range(len(li)):
    flag = True
    for j in range(len(li)-1-i):
        if(li[j]>li[j+1]):
            li[j], li[j+1] = li[j+1], li[j]
            flag = False
    if (flag == True):
        break

print(li)


