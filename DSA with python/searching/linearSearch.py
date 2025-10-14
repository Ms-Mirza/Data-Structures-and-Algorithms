li = list(map (int,input("Enter numbers separated by space: ").split()))


target = int(input("Enter the target: "))

l = len(li)

loc = -1

for i in range(l):
    if li[i] == target:
        loc = i
        break
if loc != -1:
    print("The founding position is", loc+1)

else:
    print("Target not found")
