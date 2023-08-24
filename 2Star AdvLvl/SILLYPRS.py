def chefPairs():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    sum_val = 0
    even_a = even_b = odd_a = odd_b = 0
    total_mismatched = ans = 0

    for i in range(n):
        sum_val += a[i]
        if a[i] % 2 == 0:
            even_a += 1
        else:
            odd_a += 1

    for i in range(n):
        sum_val += b[i]
        if b[i] % 2 == 0:
            even_b += 1
        else:
            odd_b += 1

    total_mismatched = n - (min(even_a, even_b) + min(odd_a, odd_b))
    ans = sum_val - total_mismatched
    print(ans // 2)

t = int(input())
for _ in range(t):
    chefPairs()
