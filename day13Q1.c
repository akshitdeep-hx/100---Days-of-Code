#include<stdio.h>

int main() {
    float a , b , result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator ( + , - , * , / ): ");
    scanf("%c", &op);
    switch(op){
        case '+':
           result = a + b;
           printf("%.2f",result);
           break;
        case '-':
           result = a - b;
           printf("%.2f", result);
           break;
        case '*':
           result = a * b;
           printf("%.2f", result);
           break;
        case '/':
         result = a / b;
         printf("%.2f", result);
         break;
         default :
          printf("Invalid Operator\n");
}


}
