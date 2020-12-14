#예외가 발생할 가능성이 있는 코드
try:
    num_input_a = int(input("정수입력> "))

#예외가 발생했을때 실행할 코드
except:
    print("정수가 아닙니다.")

#예외가 발생하지 않았을때 실행할 코드
else:
    print("원의 반지름 : ", num_input_a)
    print("원의 둘  레 : ", 2*3.14*num_input_a)
    print("원의 넓  이 : ", 3.14*num_input_a*num_input_a)