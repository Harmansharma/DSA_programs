def fact(n):
    for i in range(2, n):
        if n % i == 0:
            print("not prime")
            

fact(4)



# second way

def is_prime(n):
    if n<=1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n% i == 0:
            return False
    return True

num = int(input("Enter the number:"))

if is_prime(num):
    print(f"{num} is a prime")
else:
    print(f"{num} is not prime")


    




