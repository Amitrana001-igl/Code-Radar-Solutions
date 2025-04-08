#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=15;j++)
        {
            if(n==1){
                printf("*");
            }
            else if(n>=2 ){
                (j>=8-i&&j<=i+6);
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}