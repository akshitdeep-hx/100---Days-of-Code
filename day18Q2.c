#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d", &a,&b);
    int x=a,y=b;

    while( b != 0 ){
        int temp = b;
        b = a % b;
        a = temp;
}
   printf("%d\n", a);
    
    return 0;
}