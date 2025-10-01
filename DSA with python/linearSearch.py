li = list(map (int,input("Enter numbers separated by space: ").split()))


target = int(input("Enter the target: "))

l = len(li)

loc = -1

for i in range(0, l-1):
    if li[i] == target:
        loc = i
        break
if -1 < loc < l:
    print("The founding position is", loc+1)

else:
    print("Target not found")
