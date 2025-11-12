#include<stdio.h>

int main() {
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("\nbefore swapping: a = %d, b = %d", a, b);

    // swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
  
    printf("\nafter swapping :a = %d, b = %d\n", a,b);
    return 0;
}