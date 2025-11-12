#include <stdio.h>

int main() {
    int a, b, i, j;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &a);

    int arr1[a];
    printf("Enter %d elements for first array:\n", a);
    for (i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &b);

    int arr2[b];
    printf("Enter %d elements for second array:\n", b);
    for (i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[a + b];

    
    for (i = 0; i < a; i++) {
        merged[i] = arr1[i];
    }

    
    for (j = 0; j < b; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array:\n");
    for (i = 0; i < a + b; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
