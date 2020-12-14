limit = 10000
i = 1

sum_value = 0

while True:
    sum_value += i
    if sum_value > limit:
        break
    i += 1

print("{}를 더할때 {}을 넘으면 그때의 값은 {}입니다.".format(i, limit, sum_value))
