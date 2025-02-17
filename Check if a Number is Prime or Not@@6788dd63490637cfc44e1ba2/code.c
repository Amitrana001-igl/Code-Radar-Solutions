#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);  // Input number
    
    // Handle edge case for numbers <= 1
    if (a <= 1) {
        printf("Not Prime");
    } else {
        int isPrime = 1;  // Assume it's prime unless proven otherwise
        
        // Check divisibility from 2 to sqrt(a)
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                isPrime = 0;  // It's divisible by i, so it's not prime
                break;
            }
        }
        
        // Output the result
        if (isPrime) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }

    return 0;
}
