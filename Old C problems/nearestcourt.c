#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        int mid = (x + y) / 2;
        if (x > y)
            printf("%d\n", (x - mid));
        else
            printf("%d\n", (y - mid));
    }
    return 0;
}
