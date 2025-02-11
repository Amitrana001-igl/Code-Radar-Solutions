#include<stdio.h>
int main() {
    int a, b;
    
    // Test case 1: a < b
    a = 5; b = 10;
    if(a < b) {
        printf("Case 1: True\n");
    } else {
        printf("Case 1: False\n");
    }

    // Test case 2: a > b
    a = 10; b = 5;
    if(a < b) {
        printf("Case 2: True\n");
    } else {
        printf("Case 2: False\n");
    }

    // Test case 3: a == b
    a = 7; b = 7;
    if(a < b) {
        printf("Case 3: True\n");
    } else if(a == b) {
        printf("Case 3: False\n");
    } else {
        printf("Case 3: False\n");
    }

    // Test case 4: a < b
    a = 2; b = 5;
    if(a < b) {
        printf("Case 4: True\n");
    } else {
        printf("Case 4: False\n");
    }

    // Test case 5: a == b
    a = 5; b = 5;
    if(a < b) {
        printf("Case 5: True\n");
    } else if(a == b) {
        printf("Case 5: False\n");
    } else {
        printf("Case 5: False\n");
    }

    // Test case 6: a < b
    a = 3; b = 7;
    if(a < b) {
        printf("Case 6: True\n");
    } else {
        printf("Case 6: False\n");
    }

    // Test case 7: a == b
    a = 8; b = 8;
    if(a < b) {
        printf("Case 7: True\n");
    } else if(a == b) {
        printf("Case 7: False\n");
    } else {
        printf("Case 7: False\n");
    }

    return 0;
}
