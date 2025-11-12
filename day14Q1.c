#include<stdio.h>
 
int main() {
    int n , sum = 0;
    printf("Enter a number to print the first n odd numbers: ");
    scanf("%d", &n);
    for(int i = 1; i <= n ; i++){
        int odd = 2*i - 1;
        sum += odd;
    }
    printf("%d\n", sum);
} 