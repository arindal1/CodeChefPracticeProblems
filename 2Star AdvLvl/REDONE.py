mod = (10 ** 9) + 7 
l = [0]
for t in range(int(input())):
    n = int(input())
    for i in range(len(l), n + 1):
        l.append(((l[i - 1] * (i + 1)) + i) % mod)
    print(l[n])
