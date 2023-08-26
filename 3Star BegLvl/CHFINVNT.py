def newInvitation():
    n, p, k = map(int, input().split())
    d = p % k
    res = 0

    res += (n // k) * d
    res += p // k + 1
    res += min(d, n % k)
    print(res)

t = int(input())
for _ in range(t):
    newInvitation()
