file = open("basic1.txt", "w")

file.write("hello Python programming..!")

file.close

with open("basic2.txt", "w") as file:
    file.write("hello Pythom programming..!")