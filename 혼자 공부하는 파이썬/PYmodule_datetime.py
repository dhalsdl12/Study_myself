import datetime

print("# now time")
now = datetime.datetime.now()
print(now.year, "year")
print(now.month, "month")
print(now.day, "day")

print(now.hour, "hour")
print(now.minute, "minute")
print(now.second, "second")
print()

print("# 시간을 포맷에 맞춰 출력")
output_a = now.strftime("%Y.%m.%d %H:%M:%S")
output_b = "{}년 {}월 {}일 {}시 {}분 {}초".format(now.year,\
    now.month,\
    now.day,\
    now.hour,\
    now.minute,\
    now.second)
output_c = now.strftime("%Y{} %m{} %d{} %H{} %M{} %S{}").format(*"년월일시분초")
                                                      #문자열, 리스트 등 앞에 *을 붙이면
                                                      #요소 하나하나가 매개변수로 지정됩니다.
print(output_a)
print(output_b)
print(output_c)