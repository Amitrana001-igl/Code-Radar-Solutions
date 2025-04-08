#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    if(n==2){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
               if(j >= 1 && j <= 2){

                printf("*");
               }
            }
            printf("\n");
        }
    }
    else{
        for(i=1;i>=n;i++){
            for(j=1;j>=2;j++){
                if(j>=1&&j<=8){
                    printf("*");
                }
                else(" ");
            }
            printf("\n");
        }
    }
return 0;
}