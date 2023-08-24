def magicalPath():
    a, b = map(int, input().split())
    if (a == 1 and b == 2) or (a == 2 and b == 1):
        print("Yes")
    elif a == 1 or b == 1:
        print("No")
    elif a % 2 != 0 and b % 2 != 0:
        print("No")
    else:
        print("Yes")

t = int(input())
for _ in range(t):
    magicalPath()
