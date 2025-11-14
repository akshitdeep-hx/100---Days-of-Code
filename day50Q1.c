// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[15], dd[3], mm[3], yyyy[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int monthNum;

    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

   
    strncpy(dd, date, 2);
    dd[2] = '\0';
    strncpy(mm, date + 3, 2);
    mm[2] = '\0';
    strncpy(yyyy, date + 6, 4);
    yyyy[4] = '\0';

   
    monthNum = (mm[0] - '0') * 10 + (mm[1] - '0');

    
    printf("%s-%s-%s\n", dd, months[monthNum - 1], yyyy);

    return 0;
}
