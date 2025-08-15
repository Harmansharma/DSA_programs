n = int(input("enter the value"))
fact = 1
for i in range(1, n+1):
    fact = fact * i

print(fact)


def fact(n):
    fact = 1
    for i in range(1, 1+n):
        fact = fact * i
        
    return fact

n = int(input("enter the value"))
print(fact(n))
