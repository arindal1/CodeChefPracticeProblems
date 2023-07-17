#include <stdio.h>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int na, k, g = 0, c = 0, sg = 0;
        scanf("%d %d", &na, &k);
        int a[na];
        for (int i = 0; i < na; i++) {
            scanf("%d", &a[i]);
            g = gcd(g, a[i]);
        }
        for (int i = 0; i < na; i++) {
            sg = gcd(sg, a[i]);
            if (sg == g) {
                sg = 0;
                c++;
            }
            if (c == k)
                break;
        }
        if (c == k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
