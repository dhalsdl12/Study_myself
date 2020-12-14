list_num = [52,273,32,72,100]

try:
    num_input = int(input("input number> "))

    print("{}th number : {}".format(num_input, list_num[num_input]))
    예외.발생해주세요()

except ValueError as exception:
    print("정수를 입력하세요.")
    print(type(exception), exception)

except IndexError as exception:
    print("리스트의 인덱스를 벗어났어요.")
    print(type(exception), exception)

except Exception as exception:
    print("미리 파악하지 못한 예외가 발생했어요/")
    print(type(exception), exception)