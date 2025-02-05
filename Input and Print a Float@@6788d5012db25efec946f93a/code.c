#include <stdio.h>

int main() {
    float number;
    printf("Enter a number: \n");
    scanf("%f", &number);  // Removed the extra space after %f
    printf("Float number is: %f\n", number); // Fixed the format of the printf statement
    return 0;
}
