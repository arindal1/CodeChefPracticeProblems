#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int b = 0;
        for (int i = 0; i < n; i++) {
            int c = 0, d = 0;
            for (int k = 0; k < n; k++) {
                if (k != i) {
                    if (a[k] > a[i])
                        c++;
                    else
                        d++;
                }
            }
            if (d >= c)
                b++;
        }
        printf("%d\n", b);
    }
    return 0;
}
