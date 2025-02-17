#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);  // Input the number
    
    if(a <= 1){
        printf("Not Prime");
    }
    else{
        int isPrime = 1;  // Assume the number is prime unless proven otherwise
        for(int i = 2; i < a; i++){  // Loop to check divisibility
            if(a % i == 0){  // If a is divisible by i
                isPrime = 0;  // It's not prime
                break;  // No need to check further
            }
        }
        
        if(isPrime){  // If no divisors were found
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }

    return 0;
}
