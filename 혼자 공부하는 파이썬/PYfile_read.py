with open("basic.txt", "w") as file:
    file.write("hello Python programmings..!")

with open("basic.txt", "r") as file:
    contents = file.read()

print(contents)