#include<stdio.h>
#include<math.h>

int main() {
   float p, r, t , SI, CI,amount;
    printf("Enter the principal:");
    scanf("%f", &p);
    printf("Enter the rate of interest:");
    scanf("%f", &r);
    printf("Enter the time:");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    amount = p * pow(( 1 + r / 100),t);
    CI = amount - p;
    printf("Simple Interest:%.2f\n", SI);
    printf("Compoumd Interest: %.2f\n", CI);

} 