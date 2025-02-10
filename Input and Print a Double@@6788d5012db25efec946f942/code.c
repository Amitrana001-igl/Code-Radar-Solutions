#include <stdio.h>

int main() {
    float a;

    // Read the floating-point number
    scanf("%f", &a);  // Expecting something like 12345.6789

    // Print the number with 4 decimal places
    printf("You entered: %.4f\n", a);

    return 0;
}

