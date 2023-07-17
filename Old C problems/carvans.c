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

        int m = a[0], c = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] <= a[i - 1]) {
                c++;
            } else {
                a[i] = a[i - 1];
            }
        }

        printf("%d\n", c);
    }
    return 0;
}
