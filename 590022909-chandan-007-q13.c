#include <stdio.h>

int main(){
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if (year %4 == 0){
        printf("%d is a leap year\n", year);
    }
    else {
        printf("%d ia not a leap year\n", year);
    }

    return 0;
}