#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        printf("%d\n", (4 * x + y * 2));
    }
    return 0;
}
