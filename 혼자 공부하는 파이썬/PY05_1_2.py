def mul(*values):
    m = 1
    for value in values:
        m *= value
    return m

print(mul(5, 7, 9, 10))