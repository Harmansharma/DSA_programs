arr = "Programming"
freq = {}
for num in arr:
    if num in freq:
        freq[num]+=1
    else:
        freq[num] = 1
print(freq)



# //brute force

for num in arr:
    count =0
    for check in arr:
        if num == check:
            count+=1
    print(f"{num} occurs {count} times")
    
    # // this is brute for we can also apply checked list for duplcaticy



#   if v > max_val:
#         max_val = v
#         max_key = k
#     elif v == max_val and k > max_key:  # pick bigger key if tie
#         max_key = k   this code for max key