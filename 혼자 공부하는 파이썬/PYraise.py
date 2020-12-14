num = input("정수 입력> ")
num = int(num)

if num > 0:
    raise NotImplementedError 

#pass써도 되지만 나중에 까먹어서 raise~쓰면 나중에 오류를 일으켜 쉽게 찾는다.

else:
    raise NotImplementedError