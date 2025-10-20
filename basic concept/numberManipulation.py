# count the total digit in a number



# # 1st way: time complexity: O(log10(n)) // the number (num) is always divide by 10 that why log10

# n = 5874
# num = n # the given number doesn't want to change

# count = 0

# while num > 0:
#     count += 1
#     num = num // 10
# print(count)



# 2nd way:

from math import *
def count_digit(num):
    return int(log10(num)+1)

n = 5874
num = n
print(count_digit(num))

