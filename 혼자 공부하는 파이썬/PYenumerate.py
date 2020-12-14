example_list = ["요소a", "요소b","요소c"]

print("#simple print")
print(example_list)
print()


print("#enumerate() fac")
print(enumerate(example_list))
print()


print("#list fac")
print(list(enumerate(example_list)))
print()


print("for")
for i, value in enumerate(example_list):
    print("{}th is {}".format(i, value))