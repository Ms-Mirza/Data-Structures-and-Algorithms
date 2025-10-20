# check if a number is palindrome or not

n = 233532

num = n
result = 0

while(num > 0):
    result *= 10
    result += num % 10
    num = num // 10

if result == n:
    print(True)

else:
    print(False)