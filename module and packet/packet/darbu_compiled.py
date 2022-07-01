from numpy import linspace,min,max
def sum(beg,end,divis):

    Min=0
    Max=0

    razb = linspace(beg,end,divis)
    delta = razb[1]-razb[0]

    for i in range(len(razb)-1):

        subrazb = linspace(razb[i],razb[i+1],1000)
        df = f(subrazb)
        Min+=min(df)*delta
        Max+=max(df)*delta
    return Min,Max,Min-Max

def f(x):
    return x*2

