format_a = "{}dollars".format(5000)
format_b = "study python and make {}dollars".format(5000)
format_c = "{} {} {}".format(3000, 4000, 5000)
format_d = "{} {} {}".format(1, "string", True)

print(format_a)
print(format_b)
print(format_c)
print(format_d)


output_a = "{:d}".format(52)
output_b = "{:5d}".format(52)
output_c = "{:10d}".format(52)
output_d = "{:05d}".format(52)
output_e = "{:05d}".format(-52)

print("#기본\n", output_a)
print("#특정칸에 출력하기\n", output_b, "\n", output_c)
print("#빈칸을 0으로 채우기\n", output_d, "\n", output_e)


output_f = "{:+5d}".format(52)
output_g = "{:+5d}".format(-52)
output_h = "{:=+5d}".format(52)
output_i = "{:=+5d}".format(-52)
output_j = "{:+05d}".format(52)
output_k = "{:+05d}".format(-52)

print("#조합하기")
print(output_f)
print(output_g)
print(output_h)
print(output_i)
print(output_j)
print(output_k)