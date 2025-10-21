# Introduction to Hashing in Python

# Question: n = [5,3,2,2,1,5,5,7,5,10] and m = [10, 111, 1, 9, 5, 67, 2] 
#   1. 1 <= n[i] <= 10
#   2. n can have 10^8 elements
#   3. m can have 10^8 elements

# # 1st way: (Brute force) time complexity == O(m*n) ; space complexity == O(1)

# n = [5,3,2,2,1,5,5,7,5,10] 

# m = [10, 111, 1, 9, 5, 67, 2] 

# for i in m:
#     count = 0
#     num = i
#     for j in n:
#         if j==i:
#             count += 1
            
        
#     print(num, "->>" ,count)


# # 2nd way: (number hashing using array) time complexity == O(m+n) ; space complexity == O(1)


# n = [5,3,2,2,1,5,5,7,5,10] 

# m = [10, 111, 1, 9, 5, 67, 2] 

# hash_list = [0]*11

# for num in n:
#     hash_list[num] += 1

# for num in m:
#     if num < 1 or num > 10:
#         print(num, "->>" , 0)
#     else:
#         print(num, "->>" , hash_list[num])


# 3rd way: (number hashing using dictionary)

n = [5,3,2,2,1,5,5,7,5,10] 

m = [10, 111, 1, 9, 5, 67, 2]

hash_map = dict()

for i in range(0, len(n)):
    hash_map[n[i]] = hash_map.get(n[i], 0)+1

print(hash_map)
for i in m:
    if i in hash_map:
        print(i, "->>" ,hash_map[i])
    else:
        print(i, "->>" ,0)

