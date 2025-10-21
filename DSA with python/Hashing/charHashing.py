
# # Character hashing:(using array) {constraints: "a" <= s[i] <= "z"}

# # ord('A') → 65
# # chr(65) → 'A'

# s = "azyxyyzaaaa"
# q = ["d", "a", "y", "x", "z", "f"]
# hash_list = [0]*26

# for ch in s:
#     ascii_value = ord(ch)
#     index = ascii_value - 97
#     hash_list[index] += 1

# for ch in q:
#     ascii_value = ord(ch)
#     index = ascii_value - 97
#     print(ch," : ",hash_list[index])

# # for constraints any character: (using array)

# s = "azyxyyzaaaaf !+ * -# % &"
# q = ["d", "a", "y", "x", "z", "f", " ", "!", "+", "*", "-", "#", "%", "&"]
# hash_list = [0]*128

# for ch in s:
#     ascii_value = ord(ch)
#     index = ascii_value
#     hash_list[index] += 1

# for ch in q:
#     ascii_value = ord(ch)
#     index = ascii_value
#     print(ch," : ",hash_list[index])


# hashing for constraints any character: (using dictonary)

s = "azyxyyzaaaaf !+ * -# % &"
q = ["d", "a", "y", "x", "z", "f", " ", "!", "+", "*", "-", "#", "%", "&"]

hash_map = dict()

for i in s:
    hash_map[i] = hash_map.get(i, 0) + 1 #dictionary.get(key, default_value)


print(hash_map)

for i in q:
    if i in hash_map:
        print(i, "->>" ,hash_map[i])
    else:
        print(i, "->>" ,0)

