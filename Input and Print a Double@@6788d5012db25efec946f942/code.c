#include <stdio.h>

int main() {
    float a;  // Corrected the typo from 'flaot' to 'float'

    // Read a floating-point number with 4 decimal places
    scanf("%f", &a);  // Use '%f' for reading float numbers

    // Print the number with 4 decimal places
    printf("You entered: %.4f", a);  // Use '%.4f' to print 4 decimal places

    return 0;
}
