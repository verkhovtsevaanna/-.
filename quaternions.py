import math


class Quaternion:
    def __init__(self, a, b, c, d):
        self.a = a
        self.b = b
        self.c = c
        self.d = d

    def __abs__(self):
        return math.sqrt(self.a ** 2 + self.b ** 2 + self.c ** 2 + self.d ** 2)

    def __add__(self, other):
        return Quaternion(self.a + other.a,
                          self.b + other.b,
                          self.c + other.c,
                          self.d + other.d)

    def __neg__(self):
        return Quaternion(-self.a, -self.b, -self.c, -self.d)

    def __sub__(self, other):
        return self + (-other)

    def __mul__(self, other):
        if isinstance(other, Quaternion):
            a = self.a * other.a - self.b * other.b - self.c * other.c - self.d * other.d
            b = self.a * other.b + self.b * other.a + self.c * other.d - self.d * other.c
            c = self.a * other.c - self.b * other.d + self.c * other.a + self.d * other.b
            d = self.a * other.d + self.b * other.c - self.c * other.b + self.d * other.a
        else:
            a = self.a * other
            b = self.b * other
            c = self.c * other
            d = self.d * other
        return Quaternion(a, b, c, d)

    def inverse(self):
        a = self.a / abs(self)**2
        b = -self.b / abs(self)**2
        c = -self.c / abs(self)**2
        d = -self.d / abs(self)**2
        return Quaternion(a, b, c, d)

    def __truediv__(self, other):
        if isinstance(other, Quaternion):
            return self * other.inverse()
        return self * (1 / other)

    def __str__(self):
        return f'{self.a} + {self.b}i + {self.c}j + {self.d}k'


x = Quaternion(1, 2, 3, 4)
y = Quaternion(1, 0, 1, 0)
print(y/y + x - y)
