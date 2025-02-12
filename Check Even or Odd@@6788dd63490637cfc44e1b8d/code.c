#include<stdio.h>

int main(){
    int num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
   
    // Check if the number is even or odd
    if(num % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    return 0;
}
