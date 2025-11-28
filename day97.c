/* 
Q147: Store employee data in a binary file using fwrite() and read using fread().


Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *fp;
    Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp.id);
        printf("Name: ");
        scanf(" %[^\n]", emp.name);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(Employee), 1, fp);
    }

    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nEmployee Details from file:\n");
    printf("----------------------------\n");

    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
        printf("----------------------------\n");
    }

    fclose(fp);

    return 0;
}