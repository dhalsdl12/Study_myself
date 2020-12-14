try:
    num = int(input("정수입력> "))
    print("원의 반지름 : ", num)
    print("원의 둘  레 : ", 2*3.14*num)
    print("원의 넓  이 : ", 3.14*num*num)

except:
    print("정수입력하라고!!!")

else:
    print("예외가 발생하지 않았습니다.")

#무조건 실행할 코드
finally:
    print("일단 프로그램이 어떻게든 끝났습니다.")