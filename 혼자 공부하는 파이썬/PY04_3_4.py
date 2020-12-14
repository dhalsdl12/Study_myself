max_value = 0
a = 0
b = 0

for i in range(1,51):
    j = 100 - i

    x = i*j

    if(x > max_value):
        a = i
        b = j
        max_value = x

print("최대가 되는 경우: {} * {} = {}".format(a, b, max_value))