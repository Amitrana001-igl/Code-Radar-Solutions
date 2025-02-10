#include <stdio.h>

int main() {
    float a;

    // Read a floating-point number with '%f' format specifier
    scanf("%f", &a);

    // Print the number with 4 decimal places
    printf("You entered: %.4f\n", a);

    return 0;
}

