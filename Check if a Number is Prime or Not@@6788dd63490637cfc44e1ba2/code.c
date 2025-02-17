#include <stdio.h>

int main() {
    int n, count = 0, i;
    scanf("%d", &n);  // Corrected the scanf
    
    // Loop from 1 to n to count divisors
    for (i = 1; i <= n; i++) {  // Changed i <= n
        if (n % i == 0) {
            count++;
        }
    }

    // If there are exactly 2 divisors (1 and the number itself), it's prime
    if (count == 2) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
