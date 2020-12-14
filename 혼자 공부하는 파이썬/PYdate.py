#시간/날짜 관련된 기능을 가져옵니다.
import datetime


#현재 시간/날짜를 구합니다.
now = datetime.datetime.now()


#출력
print(now.year, "년")
print(now.month, "월")
print(now.day, "일")
print(now.hour, "시")
print(now.minute, "분")
print(now.second, "초")

print("{}년{}월{}일{}시{}분{}초".format(
    now.year,
    now.month,
    now.day,
    now.hour,
    now.minute,
    now.second,
))

if now.hour < 12:
    print("오전입니다.")
if now.hour >= 12:
    print("오후입니다.")