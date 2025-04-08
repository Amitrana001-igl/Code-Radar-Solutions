#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    if(n==1){
        printf("*");
    }
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=1&&j<=n){
                printf("*");
            }
        }
        prinf("\n");
    }
}
return 0;
}