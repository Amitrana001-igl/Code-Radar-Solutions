#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Input two integers

    // Check different operations and print the result
    if (a + b != 0) {
        printf("%d", a + b);  // Print the sum of a and b if it's non-zero
    }
    else if (a - b != 0) {
        printf("%d", a - b);  // Print the difference if it's non-zero
    }
    else if (a * b != 0) {
        printf("%d", a * b);  // Print the product if it's non-zero
    }
    else if (b != 0) {
        printf("%d", a / b);  // Print the division result if b is non-zero
    }
    else {
        printf("Invalid operation");
    }

    return 0;
}
