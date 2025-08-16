arr = [2,2,2,2,3,1,1,1,1,7,7,7,7,8]
freq = {}
for num in arr:
    if num in freq:
        freq[num]+=1
    else:
        freq[num] = 1
print(freq)
mini = float('inf')
mini_key = None

for i, j in freq.items():
    if j < mini: 
        mini = j
        mini_key = i
    elif j == mini and i > mini_key:
        mini_key = i
        
        
         
    
print(mini)
print(mini_key)




#   if v > max_val:
#         max_val = v
#         max_key = k
#     elif v == max_val and k > max_key:  # pick bigger key if tie
#         max_key = k   this code for max key



# That is find to least frequent