#include<stdio.h>
int main(){
    int i,j,n;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=15;j++)
        {
            if(j==1){
                printf("*");
            }
            else if(j>=8-i&&j<=i+6){
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