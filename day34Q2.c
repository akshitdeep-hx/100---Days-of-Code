//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("\n ");
    scanf("%d", &n);

    int arr[100];  

    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    scanf("%d", &pos);

   
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for (i = pos ; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
       printf("\n");
    return 0;
}
