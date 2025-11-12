#include<stdio.h>

int main() {
    float profit, loss, costPrice, sellingPrice,percent;
    printf("Enter Cost Price:");
    scanf("%f", &costPrice);

    printf("Enter Selling Price:");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        percent = ( profit / costPrice ) * 100;
        printf("profit = %.2f%%\n", percent);
    }
    else if(costPrice > sellingPrice){
        loss = costPrice - sellingPrice;
        percent = ( loss  / costPrice ) * 100;
        printf("loss = %.2f%%\n", percent);
    }
    else{
        printf("No Profit No Loss\n");
    }
}