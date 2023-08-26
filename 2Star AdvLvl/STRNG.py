def strongIndices():
    n = int(input())
    v = list(map(int, input().split()))
    
    gcd = v[0]
    pre = [gcd]
    for i in range(1, n):
        gcd = math.gcd(gcd, v[i])
        pre.append(gcd)
    
    gcd = v[n - 1]
    suf = [gcd]
    for i in range(n - 2, -1, -1):
        gcd = math.gcd(gcd, v[i])
        suf.append(gcd)
    suf = suf[::-1]
    
    res = 0
    for i in range(1, n - 1):
        if math.gcd(pre[i - 1], suf[i + 1]) != 1:
            res += 1
    if pre[n - 2] != 1:
        res += 1
    if suf[1] != 1:
        res += 1
    
    print(res)

import math

t = int(input())
for _ in range(t):
    strongIndices()
