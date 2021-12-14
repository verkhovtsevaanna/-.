def gcd(a, b):
    if a < b:
        return gcd(b, a)

    elif a == b:
        return (a, 0, 1)

    if not b:
        return (1, 0, a)

    y, x, g = gcd(b, a % b)
    return (g, x, y - (a // b) * x)


print(gcd(14, 7))
