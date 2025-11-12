#include<stdio.h>

int main(){
    int n , sum;
    printf("Enter the vslue of number:");
    scanf("%d", &n);

    sum = n * ( n + 1 ) / 2;
    printf("Sum of first %d natural numbers: %d\n",n,sum);
}