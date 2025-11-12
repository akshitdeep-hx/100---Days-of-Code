#include<stdio.h>
int main(){
    int num1,num2,sum,diff,prod,quot;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("Sum=%d\n",sum);
    diff=num1-num2;
    printf("diff=%d\n",diff);
    prod=num1*num2;
    printf("prod=%d\n",prod);
    quot=num1/num2;
    printf("quot=%d\n",quot);
    return 0;
}