#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, a, b, sum = 0;
        long long m;
        scanf("%lld %lld", &n, &m);
        int* arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n; i++) {
            a = labs(arr[i] - m);
            b = labs(arr[i] - 1);
            if (a > b)
                sum = sum + a;
            else
                sum = sum + b;
        }
        printf("%lld\n", sum);

        free(arr);
    }
    return 0;
}
