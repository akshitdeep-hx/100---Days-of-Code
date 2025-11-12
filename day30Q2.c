#include<stdio.h>

int main(){
    int n,i;
    int positive = 0, negative = 0, zero = 0;
    printf("\n");
    scanf("%d", &n);
    
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i]<0){
             negative++;
        }
        else{
            zero++;
        }
    }
    printf("positive = %d, negative = %d, zero = %d\n", positive, negative, zero);

}
