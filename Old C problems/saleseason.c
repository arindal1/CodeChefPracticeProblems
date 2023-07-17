#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        int d;
        if (x <= 100)
            d = 0;
        else if (x > 100 && x <= 1000)
            d = 25;
        else if (x > 1000 && x <= 5000)
            d = 100;
        else
            d = 500;
        int res = x - d;
        printf("%d\n", res);
    }
    return 0;
}
