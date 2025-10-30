#include <stdio.h>

int main() {
    float a, b, c;

    // Input side lengths
    printf("Enter length of side a: ");
    scanf("%f", &a);
    printf("Enter length of side b: ");
    scanf("%f", &b);
    printf("Enter length of side c: ");
    scanf("%f", &c);

    // Check if the sides can form a triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
    }
    else {
        // Classify the triangle
        if (a == b && b == c)
            printf("Equilateral Triangle.\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle.\n");
        else
            printf("Scalene Triangle.\n");
    }

    return 0;
}
