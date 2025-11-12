#include<stdio.h>

int main(){
    int num, first, last, swap, temp, multiplier = 1;

    printf("\n");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;
    
    while(temp >= 10){
         temp /= 10;
         multiplier *= 10;
    }

    first = temp;

    swap =  (num % multiplier)/10;

    swap = last*multiplier + swap*10 + first;

    printf("%d\n", swap);
    return 0;
}