#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter your input");
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("True");

    }
    else{
        printf("False");
    }
    return 0;
}