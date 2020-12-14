#function
power = lambda x: x*x
under_3 = lambda x: x<3

#변수선언
list_input_a = [1,2,3,4,5]

#using map() function
output_a = map(power, list_input_a)

print("# map() function result")
print("map(power, list_input_a) : ", output_a)
print("map(power, list_input_a) : ", list(output_a))
print()

#using filter function
output_b = filter(under_3, list_input_a)

print("# filter() function result")
print("filter(under_3, list_input_a) : ", output_b)
print("filter(under_3, list_input_a) : ", list(output_b))