a = "listen"
b = "silent"

freq_a = {}
for i in a:
    if i in freq_a:
        freq_a[i]+=1
    else:                           
        freq_a[i] = 1
        
print(freq_a)

freq_b = {}
for j in b:
    if j in freq_b:
        freq_b[j]+=1
    else:
        freq_b[j] =1
print(freq_b)

if freq_a == freq_b:
    print("string are anagram")
else:
    print("string are not anagran")



# Second way solve this prioblem above problem we are taking two Dict 
a = "listen"
b = "silent"

# If lengths differ, they can't be anagrams
if len(a) != len(b):
    print("Strings are not anagrams")
else:
    freq = {}

    # Add counts from string a
    for ch in a:
        if ch in freq:
            freq[ch] += 1
        else:
            freq[ch] = 1

    # Subtract counts from string b
    for ch in b:
        if ch in freq:
            freq[ch] -= 1
        else:
            freq[ch] = -1

    # Check if all values are 0
    is_anagram = True
    for value in freq.values():
        if value != 0:
            is_anagram = False
            break

    if is_anagram:
        print("Strings are anagrams")
    else:
        print("Strings are not anagrams")



# Complexity

# Time complexity == o(n+m) =o(n)
# space == 26 leter in english so o(1)
# \
# 🔹 Complexity

# Time Complexity: O(n) (two loops + check dictionary)

# Space Complexity: O(1) (since at most 26 characters for lowercase English letters)