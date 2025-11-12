#include<stdio.h>

int main(){
    int n,  sum=0, digits;
    printf("\n");
    scanf("%d", &n);

    
    while(n != 0){
        digits = n%10;
        sum += digits;
        n /=10;
    }
    
    printf("%d\n", sum);
}