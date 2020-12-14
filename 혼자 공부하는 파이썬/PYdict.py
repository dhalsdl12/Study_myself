dictionary = {
    "name": "7D 건조 망고",
    "type": "당절임",
    "ingredient": ["망고", "설탕", "메타중아황산나트륨", "치자황색소"],
    "origin": "필리핀"
}
print("name: ", dictionary["name"])
print("type: ", dictionary["type"])
print("ingredient: ", dictionary["ingredient"])
print("origin: ", dictionary["origin"])
print()

dictionary["price"] = 5000
print(dictionary)
print()

dictionary["name"] = "8D 건조 망고"
print(dictionary)
print()

dictionary["ingredient"].append("소금")
print(dictionary)
print()

del dictionary["ingredient"]
print(dictionary)
print()

key = input("선언하고자 하는 키: ")

if key in dictionary:
    print(dictionary[key])
else:
    print("존재하지 않는 키")


for key in dictionary:
    print(key, ":", dictionary[key])