#include <stdio.h>

int main() {
    int n, sum = 0;
    int odd = 1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += odd;   // add the current odd number
        odd += 2;     // go to next odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
