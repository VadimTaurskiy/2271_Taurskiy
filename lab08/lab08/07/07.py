x = [int(t) for t in input().split()]

for t in x:
    if t < 0:
        print(t)
        break
else:
    print("Отрицательных чисел нет")