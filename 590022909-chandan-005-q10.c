#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}