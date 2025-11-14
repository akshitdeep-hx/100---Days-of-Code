//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i, index, found = 0;

   
    printf("\n");
    scanf("%s", str);

    
    for(i = 0; str[i] != '\0'; i++) {
        index = str[i] - 'a';
        freq[index]++;
        if(freq[index] == 2) { 
            printf("%c", str[i]);
            found = 1;
            break;
        }
    }
    printf("\n");

    if(!found)
        printf("No repeating character");

    return 0;
}
