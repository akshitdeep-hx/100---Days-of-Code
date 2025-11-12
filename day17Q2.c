#include<stdio.h>

int main(){
    int num, isPrime = 1;
    printf("\n");
    scanf("%d", &num);

    if(num <= 1){
       printf("not a prime number");
       return 0;
    }

    for(int i = 2; i<=num / 2; i++ ){
       if(num % i == 0){
          isPrime = 0;
          break;
       }
    }

    if(isPrime){
       printf("prime number\n");
    }
    else{
        printf("not prime number\n");
    }

    return 0;
}