def test():
    print("함수가 호출되었습니다.")
    yield "test"

print("pass A")
test()

print("pass B")
test()

print(test())