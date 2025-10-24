# Bubble sort


# 1st way

li = [1, 3, 10, 6]

for i in range(len(li)):
    flag = True
    for j in range(len(li)-1-i):
        if(li[j]>li[j+1]):
            li[j], li[j+1] = li[j+1], li[j]
            flag = False
    if (flag == True):
        break

print(li)


# 2nd way


li = [1, 3, 10, 6, 7, 2, 8, 11, 12, 9]

n = len(li)

for i in range(n - 1):
    swapped = False  # Track if any swap happened
    for j in range(0, n - 1 - i):
        if li[j] > li[j + 1]:  # For ascending order
            li[j], li[j + 1] = li[j + 1], li[j]
            swapped = True

    # If no two elements were swapped in the inner loop → list is sorted
    if not swapped:
        break

print(li)

