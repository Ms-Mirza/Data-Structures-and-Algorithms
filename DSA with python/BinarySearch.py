li = list(map(int, input("Enter numbers separated by space: ").split()))
li.sort()
print("Sorted list:", li)

target = int(input("Enter the number to search: "))

start = 0
end = len(li) - 1
found = -1   # flag for position

count = 0
for i in range(0, end):
    if li[i]==target:
        count +=1


while(start<=end):
    mid = (start + end) // 2
    if li[mid] == target:
        found = mid
        break
    elif li[mid] < target:
        start = mid + 1
    else:
        end = mid - 1

if found != -1:
    print("The first found position is", found + 1, "and total count of target is", count)  # +1 for human-readable index
else:
    print("The target is not found")
