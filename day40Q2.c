// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf(" \n");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    printf("\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    printf("\n");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    printf("\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

  
    if (c1 != r2) {
        printf("Matrix multiplication not possible — invalid dimensions.\n");
        return 0;
    }

    int product[r1][c2];

    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

   
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

   
    printf("\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    return 0;
}
