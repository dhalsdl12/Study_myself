list_num = [52,273,32,72,100]

try:
    num_input = int(input("input number> "))

    print("{}th number : {}".format(num_input, list_num[num_input]))

except ValueError as exception:
    print("정수를 입력하세요.")
    print("exception: ", exception)

except IndexError as exception:
    print("리스트의 인덱스를 벗어났어요.")
    print("exception: ", exception)