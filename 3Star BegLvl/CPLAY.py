while True:
    s = input()
    if not s:
        break
    
    a = [0] * 10
    b = [0] * 10
    c, sa, sb, d = 0, 0, 0, 0
    
    for i in range(0, 9, 2):
        a[c] = int(s[i])
        sa += a[c]
        c += 1
        if sa != sb:
            if sa > sb:
                if sa - sb > 6 - c:
                    print("TEAM-A", 2 * c - 1)
                    break
            else:
                if sb - sa > 5 - c:
                    print("TEAM-B", 2 * c - 1)
                    break
        
        b[d] = int(s[i + 1])
        sb += b[d]
        d += 1
        if sa != sb:
            if sa > sb:
                if sa - sb > 5 - c:
                    print("TEAM-A", 2 * c)
                    break
            else:
                if sb - sa > 5 - c:
                    print("TEAM-B", 2 * c)
                    break
    
    if sa == sb:
        k = 10
        for j in range(5, 10):
            a[j] = int(s[k])
            sa += a[j]
            k += 1
            b[j] = int(s[k])
            sb += b[j]
            k += 1
            if sa != sb:
                if sa > sb:
                    print("TEAM-A", k)
                    break
                else:
                    print("TEAM-B", k)
                    break
        
        if sa == sb:
            print("TIE")
