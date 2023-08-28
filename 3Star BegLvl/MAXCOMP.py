def maxCompensation():
    n = int(input())
    v = []
    for i in range(n):
        s, e, c = map(int, input().split())
        v.append([s, e, c])
    
    dp = [0] * 49
    for i in range(1, 49):
        max_val = dp[i - 1]
        for j in range(n):
            if v[j][1] == i:
                max_val = max(max_val, v[j][2] + dp[v[j][0]])
        dp[i] = max_val
    print(dp[48])

def main():
    t = int(input())
    for _ in range(t):
        maxCompensation()

if __name__ == "__main__":
    main()
