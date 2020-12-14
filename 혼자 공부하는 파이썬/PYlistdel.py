list_a = [0,1,2,3,4,5]

print("#제거방법1 - del")
del list_a[1]
print(list_a)

print("#제거방법2 - pop()")
list_a.pop(2)
print(list_a)

list_b = [0,1,2,3,4,5,6]
del list_b[3:6]
print(list_b)

list_c = [0,1,2,3,4,5,6]
del list_c[:3]
print(list_c)

list_d = [0,1,2,3,4,5,6]
del list_b[3:]
print(list_d)
print()

list_e = [1,2,1,2]
print("값으로 제거 - remove")
list_c.remove(2)
print(list_e)
print()

list_f = [0,1,2,3,4,5]
print*("전체 제거 - clear()")
list_f.clear()
print(list_f)