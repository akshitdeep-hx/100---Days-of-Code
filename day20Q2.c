#include<stdio.h>
#include<string.h>

int main(){
    char binary[100];
    int i;

    printf("\n");
    scanf("%s", binary);
    
    for(i = 0; i < strlen(binary); i++){
         if(binary[i] == '0'){
            binary[i] ='1';
         }
         else if(binary[i] == '1'){
              binary[i] ='0';
         }
         else{
            printf("Please enter a binary representation\n");
            return 0;
         }
    }
    printf("%s\n", binary );
    return 0;
}