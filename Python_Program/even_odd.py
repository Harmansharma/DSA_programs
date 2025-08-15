def check_number(n):
    if n % 2 == 0:
        print("even")
    else:
        print("odd")
n = int(input("Enter the number:" ))  
# normal way to find check even and odd
check_number(n)     



# Another way to check even and odd by Bitwise operator

def check_number(n):
    if n&1 == 0:
        print("even")
    else:
        print("odd")
n = int(input("Enter the number:" ))
check_number(n)     
      