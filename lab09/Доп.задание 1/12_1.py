def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

@toint
def add(a, b):
    return a + b

print(add('10', '25'))

