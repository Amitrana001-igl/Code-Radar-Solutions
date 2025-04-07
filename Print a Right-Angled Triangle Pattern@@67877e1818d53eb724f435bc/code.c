#include <stdio.h>

int main() {
    int i, j,n;
    scanf("%d%d",&n);
    int a = 1;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(j <=n-a) {
                printf("* ");
            } else {
                printf("  "); // two spaces to match "* "
            }
        }
        a++;
        printf("\n");
    }
    return 0;
}
