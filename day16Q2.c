#include<stdio.h>

int main(){
    int num,original, rev=0, rem;

    printf("\n");
    scanf("%d", &num);

    original = num;

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
        
    }

    if(original == rev){
          printf("palindrome\n");
        }
        else{
            printf("not Palindrome\n");
        }
}