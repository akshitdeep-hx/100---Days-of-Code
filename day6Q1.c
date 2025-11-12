#include<stdio.h>

int main() {
    int n;
    printf("Enter a number to check even or odd:");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("%d is even\n", n);
    }
    else{
        printf("%d is odd\n", n);
    }

}