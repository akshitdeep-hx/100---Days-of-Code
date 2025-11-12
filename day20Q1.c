#include<stdio.h>

int main(){
    int n, digit;
    int product = 1;
    int odd= 0;
    int first = 1;

    printf("\n");
    scanf("%d", &n);

    int temp = n;
    printf("(");
    while(temp != 0){
        digit = temp % 10;
        if(digit % 2 != 0){
             if(!first)
                printf(" * ");
                printf("%d", digit);
                product *= digit;
                odd = 1;
                first = 0;
        }
          temp /= 10;
    }
    if(odd){
        printf(" ) %d\n",product);
    }
    else{
        printf("no odd numbers found , assume 1)\n");
    }
}