#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        double n, x, y, a, b;
        scanf("%lf %lf %lf %lf %lf", &n, &x, &y, &a, &b);
        double pp = x / a * n;
        double pd = y / b * n;
        if (pd > pp)
            printf("Petrol\n");
        else if (pp > pd)
            printf("Diesel\n");
        else
            printf("ANY\n");
    }
    return 0;
}
