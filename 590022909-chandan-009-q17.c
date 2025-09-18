#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check discriminant condition
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + (discriminant)) / (2 * a);
        root2 = (-b - (discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f , Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Imaginary roots
        float realPart = -b / (2 * a);
        float imagPart = (-discriminant) / (2 * a);
        printf("Roots are imaginary (complex).\n");
        printf("Root1 = %.2f + %.2fi , Root2 = %.2f - %.2fi\n", 
                realPart, imagPart, realPart, imagPart);
    }

    return 0;
}