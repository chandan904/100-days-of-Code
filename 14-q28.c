#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // use long long to store large results
    int found = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // check even number
            product *= i;
            found = 1;
        }
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
