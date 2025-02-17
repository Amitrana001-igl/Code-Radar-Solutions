#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);  // Input number
    
    // Edge case for numbers less than or equal to 1
    if (a <= 1) {
        printf("Not Prime");
    } else {
        int isPrime = 1;  // Assume the number is prime
        
        // Loop to check divisibility from 2 to a-1
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {  // If a is divisible by i, it's not prime
                isPrime = 0;
                break;  // Exit the loop as we already know it's not prime
            }
        }
        
        // Output result based on isPrime value
        if (isPrime) {
            printf("Prime");
        } else {
    

