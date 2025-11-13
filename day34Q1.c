// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>


int main() {
    int n, i, pos, num;

    printf("\n");
    scanf("%d", &n);

    int arr[100];  

    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf(" \n");
    scanf("%d %d", &pos, &num);

    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[pos - 1] = num;
    n++;

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
      printf("\n");
    return 0;
}
