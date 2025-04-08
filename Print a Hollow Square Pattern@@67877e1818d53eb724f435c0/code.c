#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    if(n==1){
        for(i=1;i>=2;i++){
            for(j=1;j>=n;j++){
                j>=1&&j<=2;
                printf("*");
            }
            printf("\n");
        }
    }
return 0;
}