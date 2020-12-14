list_input_a = ["123","456","sdfe","444","herf",]

list_num = []

for item in list_input_a:
    #예외가 발생할 수 있는 코드
    try:
        float(item)
        list_num.append(item)
    
    #예외가 발생했을 때 실행할 코드
    except:
        pass

print("숫자는 {} 입니다".format(list_num))