#include<stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=k;j++){
            if(j==k/2+1 || i==k/2+1) printf("*");
            else  printf(" ");
        }
        printf("\n")
    }
}