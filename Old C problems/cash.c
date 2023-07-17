#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        long long c = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            c = c + a[i];
        }
        printf("%lld\n", (c % k));
    }
    return 0;
}
