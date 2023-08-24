def luckyNumber():
    n, a, b = map(int, input().split())
    arr = list(map(int, input().split()))
    alice = 0
    bob = 0
    albob = 0

    for num in arr:
        if num % a == 0 and num % b == 0:
            albob += 1
        elif num % a == 0:
            bob += 1
        elif num % b == 0:
            alice += 1

    if alice == 0 and bob == 0 and albob != 0:
        print("BOB")
    elif alice == 0 and bob == 0 and albob == 0:
        print("ALICE")
    elif albob == 0:
        if alice >= bob:
            print("ALICE")
        else:
            print("BOB")
    else:
        if alice > bob:
            print("ALICE")
        else:
            print("BOB")

t = int(input())
for _ in range(t):
    luckyNumber()
