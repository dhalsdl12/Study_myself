dictionary = {
    1: 1,
    2: 1
}

def fibo(n):
    if n in dictionary:
        return dictionary[n]
    else:
        output = fibo(n-1) + fibo(n-2)
        dictionary[n] = output
        return output                     #이렇게도 사용이 가능하지만

#    if n in dictionary:
#        return dictionary[n]
#    output = fibo(n-1) + fibo(n-2)
#    dictionary[n] = output
#    return output

# 이렇게 사용하면 중간에 else를 사용하지 않아도 되어서
# 길이가 조금 더 짧아진다. 들여쓰기 이해하기도 쉬워진다.
#이것을 조기 리턴(early returns)라고 부른다.



print("fibo(10): ", fibo(10))
print("fibo(20): ", fibo(20))
print("fibo(30): ", fibo(30))
print("fibo(40): ", fibo(40))
print("fibo(50): ", fibo(50))