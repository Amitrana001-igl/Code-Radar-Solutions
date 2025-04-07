#include <stdio.h>

int main() {
    int i, j,n;
    scanf("%d%d",&n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(j <=n) {
                printf("* ");
            } else {
                printf("  "); // two spaces to match "* "
            }
        }
        printf("\n");
    }
    return 0;
}
