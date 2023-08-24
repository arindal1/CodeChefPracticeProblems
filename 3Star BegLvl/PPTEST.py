def solve(i, w, weight, value):
    if w == 0 or i < 0:
        return 0
    if dp[i][w] != -1:
        return dp[i][w]
    ans = solve(i - 1, w, weight, value)
    if weight[i] <= w:
        ans = max(ans, solve(i - 1, w - weight[i], weight, value) + value[i])
    dp[i][w] = ans
    return ans

t = int(input())
for _ in range(t):
    n, w = map(int, input().split())
    weight = []
    value = []
    for _ in range(n):
        c, p, t = map(int, input().split())
        weight.append(t)
        value.append(c * p)
    
    dp = [[-1] * (w + 5) for _ in range(n + 5)]
    print(solve(n - 1, w, weight, value))
