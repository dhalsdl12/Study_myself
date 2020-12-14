def fac(n):
    output = 1

    if n == 0:
        return 1

    for i in range(1, n+1):
        output *= i

    return output

m = int(input("정수입력> "))
for i in range(1, m+1):
    print("{}! = {}".format(i, fac(i)))



def fibo(n):
    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)

n = int(input("정수를 입력> "))
print(fibo(n))