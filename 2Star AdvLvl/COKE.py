def cokeCan():
    n, m, k, l, r = map(int, input().split())
    ans = []
    for _ in range(n):
        c, p = map(int, input().split())
        for _ in range(m):
            if c < k - 1:
                c += 1
            elif c > k + 1:
                c -= 1
            elif c >= k - 1 and c <= k + 1:
                c = k
        if l <= c <= r:
            ans.append(p)
    if ans:
        mn = min(ans)
        print(mn)
    else:
        print(-1)

t = int(input())
for _ in range(t):
    cokeCan()

