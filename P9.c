#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Ask the user to input the marks
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    // Validate the input
    if (marks < 0 || marks > 100) {
        printf("Invalid input. Marks should be between 0 and 100.\n");
    } else {
        // Determine the grade using the ternary operator
        grade = (marks >= 90) ? 'A' :
                (marks >= 80) ? 'B' :
                (marks >= 70) ? 'C' :
                (marks >= 60) ? 'D' :
                'F';

        // Display the corresponding grade
        printf("The grade is: %c\n", grade);
    }
    printf("mahima kukadiya, 24TCES9M");
    return 0;
}

