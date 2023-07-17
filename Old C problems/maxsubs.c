#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        int res = (x * 60) / 30;
        printf("%d\n", res);
    }
    return 0;
}
