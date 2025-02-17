

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    
    scanf("%f %f %c", &num1, &num2, &operator);
    
    switch (operator) {
        case '+': printf("%.2f\n", num1 + num2); break;
        case '-': printf("%.2f\n", num1 - num2); break;
        case '*': printf("%.2f\n", num1 * num2); break;
        case '/': 
            if (num2 != 0) printf("%.2f\n", num1 / num2);
            else printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
