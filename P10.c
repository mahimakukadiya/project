#include <stdio.h>
#include <unistd.h> // For the sleep function

int main() {
    int seconds;

    // Ask the user to input the number of seconds for the countdown
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    // Validate the input
    if (seconds < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1; // Exit the program with an error code
    }

    // Countdown loop
    while (seconds > 0) {
        printf("%d\n", seconds);
        sleep(1); // Wait for 1 second
        seconds--; // Decrement the seconds
    }

    // Print the completion message
    printf("Countdown completed!\n");
    printf("mahima kukadiya, 24TCES9M");
    return 0;
}

