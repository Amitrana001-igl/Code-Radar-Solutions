#include <stdio.h>

int main() {
    int month;

    // Input the month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Using if-else to determine the number of days in the month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("31 days\n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30 days\n");
    }
    else if (month == 2) {
        printf("28 days (Assuming not a leap year)\n");
    }
    else {
        printf("Invalid month number\n");  // Invalid input (not between 1 and 12)
    }

    return 0;
}
