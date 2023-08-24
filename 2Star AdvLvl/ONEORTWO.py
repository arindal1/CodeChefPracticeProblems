def whoisWinner():
    x, y = map(int, input().split())

    dif = abs(x - y)
    if dif >= 2:
        if x > y:
            print("CHEF")
        else:
            print("CHEFINA")
    else:
        if x == y:
            if x % 2 == 1:
                print("CHEF")
            else:
                print("CHEFINA")
        else:
            mn = min(x, y)
            if mn % 2 == 1:
                print("CHEF")
            else:
                print("CHEFINA")

t = int(input())
for _ in range(t):
    whoisWinner()
