//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[100];
    int i;

    
    printf("\n");
    scanf("%[^\n]", str);  

   
    printf("%c.", str[0]);

    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != '\0') {
            printf("%c.", str[i+1]);
        }
    }
       printf("\n");
    return 0;
}
