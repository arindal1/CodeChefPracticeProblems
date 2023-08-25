def garlandBeautiful():
    s = input()
    n = len(s)
    cr = cp = cg = 0
    flag = False
    if n % 2 != 0:
        flag = True
    for i in range(n):
        if s[i] == 'R':
            cr += 1
        else:
            cg += 1
        if i > 0:
            if s[i - 1] == s[i]:
                cp += 1
    if n > 2 and s[0] == s[n - 1]:
        cp += 1
    if cr != cg or cp > 2:
        flag = True
    if flag:
        print("no")
    else:
        print("yes")

t = int(input())
for _ in range(t):
    garlandBeautiful()
