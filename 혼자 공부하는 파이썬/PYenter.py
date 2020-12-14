num = int(input("정수입력> "))

if num%2 == 0:
    print((
        "입력한 문자열은 {}입니다\n"
        "{}는(은) 짝수입니다\n"
    ).format(num, num))

else:
    print((
        "입력한 문자열은 {}입니다\n"
        "{}는(은) 홀수입니다\n"
    ).format(num, num))


if num%2 == 0:
    print("\n".join([
        "입력한 문자열은 {}입니다.",
        "{}는(은) 짝수입니다."
    ]).format(num, num))

else:
    print("\n".join([
        "입력한 문자열은 {}입니다.",
        "{}는(은) 홀수입니다."
    ]).format(num, num))