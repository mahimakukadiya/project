#include <stdio.h>
#include <unistd.h> // For the sleep function

int main() {
    int seconds;

    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    if (seconds < 0)
    {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    while (seconds > 0) {
        printf("%d\n", seconds);
        sleep(1); // Wait for 1 second
        seconds--;
    }

    printf("Countdown completed!\n");
    printf("Mahima Kukadiya, 24CE058");
    return 0;
}


