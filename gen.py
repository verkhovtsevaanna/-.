from random import uniform

def f(x):
    return x**7 - 3 * x ** 6 + 2 * x**5 - 4 * x**4 + 6 * x**3 - 10 * x + 5

def fitness(x):
    if f(x) == 0:
        return 1000000000
    else:
        return abs(1/f(x))

print("Многочлен f(x) = x^7 -3x^6 + 2x^5 - 4x^4 + 6x^3 - 10x + 5")
x_list = [i for i in range(-100, 100+1)]
for rep in range(50):
    for i in range(len(x_list)):
        mutation = x_list[i] * uniform(0.9, 1.1)
        if fitness(mutation) > fitness(x_list[i]):
            x_list[i] = mutation
print("Некоторые аппроксимированные нули многочлена на отрезке [-100, 100]:")
print('         x   |   f(x)     ')
for i in range(len(x_list)):
    if abs(f(x_list[i])) > 0.1:
        x_list[i] = 0
    else:
        print(x_list[i], f(x_list[i]))
    

    










