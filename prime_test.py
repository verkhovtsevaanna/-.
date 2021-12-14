import math


def is_prime(n):
    if n < 2:
        return False
    if n < 4:
        return True
    N = math.ceil(math.sqrt(n) + 1)
    for i in range(2, min(N, 25)):
        if n % i == 0:
            return False
    if pow(23, n - 1, n) == 1:
        return True
    else:
        return False


print(is_prime(1000033 * 101))
