arr = [2,2,2,2,3,1,1,1,1,7,7,7,7]
freq = {}
for num in arr:
    if num in freq:
        freq[num]+=1
    else:
        freq[num] = 1
print(freq)
maxi = 0
maxi_key = float('inf')

for i, j in freq.items():
    if j > maxi:
        maxi = j
        maxi_key = i
    elif j == maxi and i < maxi_key:
        maxi_key = i
        
        
        
    
print(maxi)
print(maxi_key)




#   if v > max_val:
#         max_val = v
#         max_key = k
#     elif v == max_val and k > max_key:  # pick bigger key if tie
#         max_key = k   this code for max key