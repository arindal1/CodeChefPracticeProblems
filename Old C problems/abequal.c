#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int* a = (int*)malloc(n * sizeof(int));
        int* b = (int*)malloc(n * sizeof(int));
        int* c = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);
        long long max = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
            sum = sum + c[i];
            if (c[i] > 0)
                max = max + c[i];
        }
        if (sum == 0)
            printf("%lld\n", max);
        else
            printf("-1\n");

        free(a);
        free(b);
        free(c);
    }
    return 0;
}
