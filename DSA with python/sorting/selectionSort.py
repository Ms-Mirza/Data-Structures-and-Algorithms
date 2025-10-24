li = [1, 5, 6, 10, 11, 4, 3, 2, 8, 7]
length = len(li)

for i in range(0, length):
    index = i
    
    for j in range (i+1, length):
        if(li[index]<li[j]): # decending order
            index = j
    
    li[index], li[i] = li[i], li[index]


print(li)