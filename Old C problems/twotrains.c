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
        int j = 0, dis = 0, i = 0;
        a[0] = 0, b[0] = 0;
        for (i = 1; i < n; i++) {
            scanf("%d", &a[i]);
            dis = dis + a[i];
            b[i] = a[i];
            a[i] = dis;
        }

        for (i = 0; i < n - 1; i++) {
            j = a[i + 1] - b[i];
            if (j > 0)
                b[i + 1] = b[i] + j + b[i + 1];
            else
                b[i + 1] = b[i] + b[i + 1];
        }
        printf("%d\n", b[i]);

        free(a);
        free(b);
    }
    return 0;
}
