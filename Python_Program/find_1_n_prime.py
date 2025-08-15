def is_prime(n):
    if n<=1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n% i == 0:
            return False
    return True

num = int(input("Enter the number:"))
for i in range(1, num+1):
    if is_prime(i):
        print(f"{i} is a prime")
    else:
        print(f"{i} is not prime ")

