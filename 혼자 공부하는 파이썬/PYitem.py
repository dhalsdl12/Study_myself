ex_dic = {
    "heightA": "valueA",
    "heightB": "valueB",
    "heightC": "valueC",
}

print("#dictionary items() fac")
print("item(): ", ex_dic.items())
print()


print("#dictionary items() fac and for")

for key, element in ex_dic.items():
    print("dictionary[{}] = {}".format(key, element))