#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, c = 0, i;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++) {
            if (a[i] >= 1 && a[i] <= 7)
                c++;
            if (c == 7)
                break;
        }
        printf("%d\n", i + 1);
    }
    return 0;
}

