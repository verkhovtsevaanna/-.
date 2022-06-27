from numpy import array, concatenate
from numpy.linalg import norm
from numpy.linalg import solve as solve_out_of_the_box
from numpy import vectorize
from operator import add


def multiply(x, a):
    return x * a

def vect_mult():
    return vectorize(multiply)

def vector_gauss(a, b):
    ab = concatenate((a, array([b]).T), axis=1) 
    d = len(ab)  # размер по старшему измерению
    for i in range(d):
        for j in range(len(a[i])):
            if ab[i][j] != 0:
                print(ab[i][j])
                row_red = vectorize(multiply)
                print(f'multiply to get 1')
                ab[i] = row_red(ab[i], 1/ab[i][j])
                if i != 0:
                    for t in range(j):
                        print('subtract from upper rows')
                        ab[i-1-t] = list(map(add, ab[i-1-t], ab[i]*(-ab[i-1-t][j])))
                break
        for k in range(i+1, d):
            print(f'subtract {i}-th row')
            ab[k] = ab[k] - ab[k][j]*ab[i]
        print(ab)
       

    for i in range(d):              #Проверка совместности 
        nonzero_row = False
        for j in range(len(a[i])):
            if abs(ab[i][j]) > 10 ** (-8):
                nonzero_row = True
        
        if nonzero_row == False and abs(ab[i][-1]) > 10 ** (-8):
            return 'решений нет'
    
    solution = len(ab)*[0]          #Вывод значений переменных согласно ступенькам
    for i in range(len(ab)):
        for j in range(len(ab[i])-1):
            if ab[i][j] == 1:
                solution[j] = ab[i][-1]
    return solution


a = array([
    [0, 2, 1, 3],
    [1, 1, 1, 1],
    [0, 4, 5, 7],
    [2, 2, 2, 2]
], dtype=float)

b = array([5, 6, 7, 12], dtype=float)

print(concatenate((a, array([b]).T), axis=1))
print("\nРешения этой системы:")
print(vector_gauss(a,b))
