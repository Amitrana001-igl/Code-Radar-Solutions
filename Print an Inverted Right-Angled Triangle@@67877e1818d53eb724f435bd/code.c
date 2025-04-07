#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            if(j<=3-i){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}