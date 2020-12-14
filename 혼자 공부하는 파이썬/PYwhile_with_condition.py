list_test = [1, 2, 1, 2]

value = 2

while value in list_test:
    list_test.remove(value)

print(list_test)


i = 0

while True:
    print("{}번째 반복문입니다.".format(i))
    i = i+1

    input_text = input(">종료하시겠습니까?(y): ")

    if input_text in ["y", "Y"]:
        print("반복을 종료합니다.")
        break


numbers = [5, 15, 6, 20, 7, 25]

for number in numbers:
    if number < 10:
        continue

    print(number)