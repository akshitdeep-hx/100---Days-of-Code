#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2, real, image;
    printf("Enter coefficients a, b and c:");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if(discriminant > 0) {
        root1 = ( -b + sqrt(discriminant)) / ( 2 * a); 
        root2 = ( -b - sqrt(discriminant)) / ( 2 * a);
        printf("\nroots are real and diffrent: %.2f , %.2f\n", root1, root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -b / (2 * a);
        printf("\nroots are real and same :%.2f\n ", root1);
    }

    else {
        real = -b / ( 2 * a);
        image = sqrt(-discriminant) / ( 2 * a);
        printf("roots are complex\n");
    }
}