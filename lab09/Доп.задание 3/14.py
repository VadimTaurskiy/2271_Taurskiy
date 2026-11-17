def fib(n, a=1, b=1):
    if n <= 2:
        return b
    return fib(n - 1, b, a + b)
