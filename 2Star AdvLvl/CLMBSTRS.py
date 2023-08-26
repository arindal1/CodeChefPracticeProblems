MAXN = 1000000
MODN = 1000000007

table = [0] * (MAXN + 1)

def count_ones(x):
    count = 0
    while x:
        count = count + (x & 1)
        x >>= 1
    return count

def monkRitual():
    N, G = map(int, input().split())
    print("CORRECT" if count_ones(table[N]) == G else "INCORRECT")

def main():
    table[0] = 0
    table[1] = 1
    table[2] = 2
    for i in range(3, MAXN + 1):
        table[i] = (table[i - 1] % MODN + table[i - 2] % MODN) % MODN
    tt = int(input())
    for _ in range(tt):
        monkRitual()

if __name__ == "__main__":
    main()

