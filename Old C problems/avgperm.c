#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n == 3) {
            printf("1 2 3\n");
        } else {
            printf("%d ", n);
            printf("%d ", n - 3);
            for (int i = 1; i < n - 3; i++) {
                printf("%d ", i);
            }
            printf("%d ", n - 2);
            printf("%d ", n - 1);
            printf("\n");
        }
    }
    return 0;
}
