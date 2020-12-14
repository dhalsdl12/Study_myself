#입력을 받습니다.

number = input("정수 입력> ")
number = int(number)

if number > 0:
    print("양수입니다.")

if number < 0:
    print("음수입니다.")

if number == 0:
    print("0입니다.")


num = input("정수 입력> ")
last_char = num[-1]

if last_char in "02468":
    print("짝수입니다")
if last_char in "13579":
    print("홀수입니다")


num = int(num)

if num %2 == 0:
    print("짝수입니다")
if num %2 != 0:
    print("홀수입니다")