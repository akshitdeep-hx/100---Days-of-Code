#include<stdio.h>

int main() {
    int units;
    float bill = 0.0;
    printf("Enter number of units consumed:");
    scanf("%d", &units);
    if(units <= 100){
        bill = units * 5.0;
        printf("Bill = %.2f\n", bill);
    }
    else if(units <= 200){
        bill =  ( 100 * 5.0 ) +  ( units - 100 ) * 7.0;
        printf("Bill = %.2f\n", bill);  
        }
    else if(units <= 300){
        bill = ( 100 * 5.0 )+ ( 100 * 7.0 ) + ( units - 200 ) * 10.0;
        printf("Bill = %.2f\n", bill);
    }
    else{
        bill = ( 100 * 5.0 ) + ( 100 * 7.0 ) + ( 100 * 10.0 ) + ( units - 300 ) * 12.0;
        printf("Bill = %.2f\n", bill);
    }
    
}