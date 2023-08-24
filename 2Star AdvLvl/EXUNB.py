def tennisTourny():
    n = int(input())
    if n % 2 == 0:
        print("NO")
    else:
        ans = [['0'] * n for _ in range(n)]

        for i in range(n):
            for j in range(1, n // 2 + 1):
                ans[i][(i + j) % n] = '1'

        print("YES")
        for line in ans:
            print("".join(line))

t = int(input())
for _ in range(t):
    tennisTourny()
