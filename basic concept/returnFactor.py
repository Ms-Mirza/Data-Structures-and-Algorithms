# print the all factor of a giving number


# 1st  way: brute force

num = 100

factor = []

i = 1

while(i <= num):
    if(num % i == 0):
        factor.append(i)  
    i += 1

print(factor)


# 2nd way:

num = 100

factors = []

i = 1

while(i <= num//2):
    if(num % i == 0):
        factors.append(i)
    i += 1

factors.append(num)

print(factors)


# 3rd way:

from math import sqrt
num = 100

factors = []

for i in range(1, int(sqrt(num))+1):
    if num % i == 0:
        factors.append(i)
        if num // i != i:
            factors.append(num//i)

factors.sort()
print(factors)