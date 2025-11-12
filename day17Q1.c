#include<stdio.h>
#include<math.h>

int main(){
   int num , original,rem, digits = 0;
   double result;

   printf("\n");
   scanf("%d", &num);

   original = num;

   int temp = num;
   while(temp != 0){
       temp /= 10;
       digits++;
    }

    temp = num;
    while(temp != 0){
        rem = temp % 10;
        result += pow(rem,digits);
            temp /= 10;
    }

    if(result == original ){
        printf("Armstrong number\n");
    }
    else{
        printf("not Armstrong number\n");
    }
}