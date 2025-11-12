#include<stdio.h>

int main() {
    int year;
    printf("Enter a year you want to find a leap year for:");
    scanf("%d", &year);
    if((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0)){
         printf("%d is a leap year\n", year);
        }
        else{
            printf("%d is not a leap year\n", year);
        }
}