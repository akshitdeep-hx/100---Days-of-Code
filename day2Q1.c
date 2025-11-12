#include<stdio.h>
#include<math.h> 
int main(){
    int num1,num2,perimeter,area;
    printf("Enter length:");
    scanf("%d",&num1);
    printf("Enter breath:");
    scanf("%d",&num2);

    perimeter=2*(num1+num2);
    printf("perimeter=%d\n",perimeter);
    area=num1*num2;
    printf("Area=%d\n",area);
    return 0;
}