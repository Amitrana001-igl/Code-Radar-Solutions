#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}