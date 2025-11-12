#include<stdio.h>

int main(){
    int n;
    float sum = 0.0;
    int den = 2; int num = 1;
     printf("\n");
     scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        sum += (float)num/den;
        num += 2;
        den += 2;
    }
    
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}