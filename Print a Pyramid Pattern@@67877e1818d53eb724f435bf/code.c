#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    if (n == 1) {
        printf("*\n");
    } 
    else if (n >= 2) {
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= 15; j++) {
                if(j >= n - i + 1  &&  j <= n + i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}