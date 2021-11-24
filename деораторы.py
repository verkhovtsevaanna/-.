def function(n):
    def innerfunction(f):
        def body(x):
            y = x
            for m in range(n):
                y = f(y)
            return y
        return body
    return innerfunction

@function(3)
def res(x):
    return x+3

print(res(2))
