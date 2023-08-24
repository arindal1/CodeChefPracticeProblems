def amountOfMoney():
    pa = float(input())
    pb = 1 - pa
    ans = 10000
    
    ans += 2 * pa * pb * 10000
    
    if pa > pb:
        ans -= pb * 10000
    else:
        ans -= pa * 10000
    
    print("{:.2f}".format(ans))

t = int(input())
for _ in range(t):
    amountOfMoney()
