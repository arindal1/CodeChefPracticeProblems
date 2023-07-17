#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        if ((x - 1) > (100 - x))
            printf("Right\n");
        else
            printf("Left\n");
    }
    return 0;
}
