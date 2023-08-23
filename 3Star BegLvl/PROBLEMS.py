p, s = map(int, input().split())
ans = []

for i in range(1, p+1):
    score = list(map(int, input().split()))
    m = []
    for j in range(s):
        num = int(input())
        m.append((score[j], num))

    count = 0
    m.sort()
    for j in range(1, s):
        if m[j-1][1] > m[j][1]:
            count += 1
    ans.append((count, i))

ans.sort()

for i in range(p):
    print(ans[i][1])
