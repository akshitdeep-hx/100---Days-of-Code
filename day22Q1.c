#include<stdio.h>
 
long long factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
        else{
            return n*factorial(n - 1);
        }
    
}

int isStrong(int number){
int original = number;
long long sumOfFactorial = 0; 

if(number > 0){
   sumOfFactorial += factorial(number % 10);
   number /= 10; 
}
if(number > 0){
    sumOfFactorial += factorial(number % 10);
    number /= 10;
  }
  if(number > 0){
    sumOfFactorial  += factorial(number % 10);
    number /= 10;
  }
  return (sumOfFactorial == original);
}
int main(){
    int num;
    printf("\n");
    scanf("%d", &num);
    

    if(isStrong(num)){
        printf("strong number\n");
    }
    else{
        printf("not strong number\n");
    }
}