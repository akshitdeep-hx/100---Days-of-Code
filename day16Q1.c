#include<stdio.h>

int main(){
    int num,binary[32];
    int i = 0;

    printf("\n");
    scanf("%d", &num);

    if(num == 0){
        printf("Binary Representation 0\n:");
        return 0;
    }


    while(num > 0){
        binary[i] = num%2;
        num = num/2;
        i++;
    }

    for(i = i - 1; i >= 0; i--){
         printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}