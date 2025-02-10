#include <stdio.h>

int main() {
    char str[100], str2[100];

    // Take two strings as input
    scanf("%s %s", str, str2);

    // Print the two strings correctly
    printf("You entered: %s", str);  // Use the correct variable name str
    printf("%s\n", str2);

    return 0;
}
