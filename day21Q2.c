#include<stdio.h>

int main(){
    int num,sum = 0, i;

    printf("\n");
    scanf("%d", &num);

    for( i = 1; i <= num/2; i++){
        if(num % i == 0){
           sum += i;
        }
    }

    if(sum == num){
        printf("perfect number\n");
    }
    else{
        printf("not a perfect number\n");
    }
    return 0;
}