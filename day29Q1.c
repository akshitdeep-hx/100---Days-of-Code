#include<stdio.h>

int main(){
    int i,n;
    int sum=0;
    printf("\n");
    scanf("%d", &n);

     int arr[n];

    for(i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
         sum += arr[i];
    }
    
    printf("%d\n", sum);

    return 0;
}