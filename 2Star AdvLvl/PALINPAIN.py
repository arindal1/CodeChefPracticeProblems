def palindromes():
    a, b = map(int, input().split())

    if (a % 2 == 1 and b % 2 == 1) or b == 1 or a == 1:
        print(-1)
    elif a % 2 == 0 and b % 2 == 0:
        s1 = 'a' * (a // 2)
        s2 = 'b' * b
        s3 = 'a' * a
        s4 = 'b' * (b // 2)

        print(s1 + s2 + s1)
        print(s4 + s3 + s4)
    elif a % 2 == 0:
        s5 = 'a' * (a // 2)
        s6 = 'b' * b
        s7 = 'b' * (b // 2)

        print(s5 + s6 + s5)
        print(s7 + s5 + 'b' + s5 + s7)
    elif b % 2 == 0:
        s8 = 'b' * (b // 2)
        s9 = 'a' * a
        s10 = 'a' * (a // 2)

        print(s8 + s9 + s8)
        print(s10 + s8 + 'a' + s8 + s10)

t = int(input())
for _ in range(t):
    palindromes()
