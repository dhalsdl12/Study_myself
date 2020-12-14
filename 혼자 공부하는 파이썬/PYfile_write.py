#random number
import random

#korean list
korean = list("가나다라마바사아자차카타파하")

#file write mode
with open("info.txt", "w") as file:
    for i in range(1000):
        #random result
        name = random.choice(korean) + random.choice(korean)
        weight = random.randrange(40,100)
        height = random.randrange(140,200)

        #write text
        file.write("{}, {}, {}\n".format(name, weight, height))