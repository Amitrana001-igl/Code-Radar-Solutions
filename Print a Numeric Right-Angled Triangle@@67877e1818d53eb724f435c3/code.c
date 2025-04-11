#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}