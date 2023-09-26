#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("x1 = %.2f; x2 = %.2f\n", x1, x2);
    } else if (discriminant == 0) {
        printf("Roots are real and same.\n");
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        printf("Roots are complex and different.\n");
        x1 = -b / (2 * a);
        x2 = sqrt(-discriminant) / (2 * a);
        printf("x1 = %.2f + %.2fi; x2 = %.2f - %.2fi\n", x1, x2, x1, x2);
    }

    return 0;
}
