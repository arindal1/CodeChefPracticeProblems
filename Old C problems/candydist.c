#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int r = n / m;
        if (n % m == 0 && r % 2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
