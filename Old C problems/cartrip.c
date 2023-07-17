#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, s;
        scanf("%d", &x);
        if (x <= 300)
            s = 10 * 300;
        else
            s = 10 * x;
        printf("%d\n", s);
    }
    return 0;
}
