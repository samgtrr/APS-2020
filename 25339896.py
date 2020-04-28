t = int(input())

for i in range(t):
    fact = 1
    n = int(input())
    for j in range(2, n + 1):
        fact *= j
    print(fact)