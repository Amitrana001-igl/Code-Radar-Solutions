#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Input number
    
    // Handle edge case for numbers <= 1
    if (a <= 1) {
        printf("Not Prime");
    } else {
        int isPrime = 1;  // Assume it's prime unless proven otherwise
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                isPrime = 0;  // It's divisible by i, so it's not prime
                break;
            }
        }
        
        if (isPrime) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }

    return 0;
}

