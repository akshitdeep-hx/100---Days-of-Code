#include<stdio.h>
#include<math.h> 
int main(){
    int radius,cir,area;
    printf("Enter Radius:");
    scanf("%d",&radius);
    cir=2*3.14*radius;
    printf("circumference=%d\n",cir);
    area=3.14*radius*radius;
    printf("Area=%d\n",area);    
    return 0;
}