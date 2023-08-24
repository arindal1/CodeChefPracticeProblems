def minimumJars():
    n = int(input())
    temp_list = list(map(int, input().split()))
    ans = 0

    for temp in temp_list:
        ans += temp - 1
    
    print(ans + 1)

t = int(input())
for _ in range(t):
    minimumJars()
