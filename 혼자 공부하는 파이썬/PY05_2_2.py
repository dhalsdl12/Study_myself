최소사람수 = 2
최대사람수 = 10
전체사람수 = 100
memo = {}

def 문제(남은사람수, 앉힌사람수):
    key = str([남은사람수, 앉힌사람수])

    if key in memo:
        return memo[key]
    if 남은사람수<0:
        return 0
    if 남은사람수 == 0:
        return 1

    cnt = 0
    for i in range(앉힌사람수, 최대사람수+1):
        cnt+= 문제(남은사람수 - i, i)
    
    memo[key] = cnt

    return cnt



print(문제(전체사람수, 최소사람수))