#param basic
def print_n_times(value, n):
    for i in range(n):
        print(value)

print_n_time("hello", 5)


#param varialbe
def print_m_times(n, *values):
    for i in range(n):
        for value in values:
            print(value)
        print()

print_m_times(2, "hello", "enjoyed", "python programming")


#param default
def print_o_times(value, n=2):       #n=2가 무조건 value보다 뒤에와야한다.
    for i in range(n):
        print(value)

print_o_times("hello")

#def print_n_times(*value, n=2)
#~~
#print_n_times("hello", "world", 3)
#위에처럼 하면 value를 2번 또는 3번인데
#hello world 3을 두번 출력하게된다

#keyword - 2를 3으로 바꾸기
def print_p_times(*values, n=2):
    for i in range(n):
        for value in values:
            print(value)

print_p_times("hello", "enjoyed", "python programming", n = 3)