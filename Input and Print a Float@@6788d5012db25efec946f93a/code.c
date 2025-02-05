#include <stdio.h>

int main() {
    float number;
    printf("Enter a number: \n");
    scanf("%f", &number);  // Removed the extra space after %f
    printf("Float number is: %f\n", number);  // Corrected the formatting
    return 0;
}
