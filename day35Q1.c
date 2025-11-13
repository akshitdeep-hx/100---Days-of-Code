// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    printf("\n");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

   
    first = second = -2147483648;  

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648){
        printf("No second largest element (all elements are equal).\n");
    }
    else{
        printf(" %d\n", second);
    }
    return 0;
}
