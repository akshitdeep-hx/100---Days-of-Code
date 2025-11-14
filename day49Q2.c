//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, lastSpace = -1;

   
    printf("\n");
    scanf("%[^\n]", str);  

    len = strlen(str);

   
    for(i = 0; i < len; i++) {
        if(str[i] == ' ')
            lastSpace = i;
    }

    printf("%c.", str[0]);
    for(i = 0; i < lastSpace; i++) {
        if(str[i] == ' ' && str[i+1] != '\0')
            printf("%c.", str[i+1]);
    }

  
    printf(" %s\n", &str[lastSpace + 1]);

    return 0;
}

