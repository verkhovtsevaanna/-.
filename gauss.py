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
                row_red = vectorize(multiply)
                ab[i] = row_red(ab[i], 1/ab[i][j])
                if i != 0:
                    for t in range(j):
                        ab[i-1-t] = list(map(add, ab[i-1-t], ab[i]*(-ab[i-1-t][j])))
                break
        for k in range(i+1, d):
            ab[k] = ab[k] - ab[k][j]*ab[i]
        a[i] 
    
    x = ab[:, -1]
    return x


a = array([
    [1.5, 2.0, 1.5, 2.0],
    [3.0, 2.0, 4.0, 1.0],
    [1.0, 6.0, 0.0, 4  ],
    [2.0, 1.0, 4.0, 3  ]
], dtype=float)

b = array([5, 6, 7, 8], dtype=float)

print(concatenate((a, array([b]).T), axis=1))
print("\nРешения этой системы:")
print(vector_gauss(a,b))