#include <stdio.h>

int main() {
    int n, i, num, pos;

    printf("\n");
    scanf("%d", &n);

    int arr[100]; 

    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n ");
    scanf("%d", &num);

     pos = n;  
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

     for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;

   
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
