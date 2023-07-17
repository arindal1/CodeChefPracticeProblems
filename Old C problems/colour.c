#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a[3], s = 0, c = 0;
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        qsort(a, 3, sizeof(int), compare);  // Sort the array in ascending order
        int res = 0;
        for (int i = 0; i < 3; i++) {
            if (a[i] >= 1)
                res++;
        }
        if (a[0] == 2)
            printf("%d\n", (a[2] >= 3 ? res + 2 : res + 1));
        else if (a[0] >= 3)
            printf("%d\n", res + 3);
        else
            printf("%d\n", (a[1] <= 1 ? res : res + 1));
    }
    return 0;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
