#include<stdio.h>

int main(){
    int i, n, even = 0, odd = 0;

    printf("\n");
    scanf("%d", &n);

    int arr[n];

    for(i = 0;  i < n; i++){
       scanf("%d", &arr[i]);

       if( arr[i] % 2 == 0){
             even++;
       }
       else{
        odd++;
       }
    }
    printf("Even = %d, odd = %d\n", even, odd);
}