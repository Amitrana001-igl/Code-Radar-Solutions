#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d ",&a);
    if(a <=1 ){
        printf(" Not Prime");
    }
    
    else{
        int isPrime ==1;
        for(int i=2; i<=sqrt(a); i++ ){
            if( a%i ==0){
                isPrime=0;
                break;
            }
        }
    }
    return 0;
}