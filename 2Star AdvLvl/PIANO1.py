def pianoTiles():
    N = int(input())
    s = input()
    sad = rez = 0
    i = 0
    idx = 0
    while i < len(s):
        if s[i] == 'S':
            idx += 1
        else:
            idx += 2
        i += 1
    sad = idx
    while sad <= 12 * N:
        rez += 12 * N - sad
        sad += idx
    print(rez)

t = int(input())
for _ in range(t):
    pianoTiles()
