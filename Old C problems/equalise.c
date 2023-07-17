#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c = 0, res;
        scanf("%d %d", &a, &b);
        if (a == b)
            printf("Yes\n");
        else {
            if (a < b) {
                res = a;
                while (res < b) {
                    res = res * 2;
                }
                if (res == b)
                    printf("YES\n");
                else
                    printf("NO\n");
            } else {
                res = b;
                while (res < a) {
                    res = res * 2;
                }
                if (res == a)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}
