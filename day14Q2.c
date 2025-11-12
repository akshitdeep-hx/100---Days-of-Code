#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            product *= i;
    }

    printf("%lld(", product);

    int first = 1;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (!first)
                printf("*");
            printf("%d", i);
            first = 0;
        }
    }

    printf(")\n");

    return 0;
}
