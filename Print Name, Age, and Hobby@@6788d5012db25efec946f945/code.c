#include <stdio.h>

int main(){
    char a[100];
    char b[200];
    int c;
    scanf("%s %d %s", &a, &b, &c);
    printf("Name: %s \n",a);
    printf("Age: %d \n",c);
    printf("Hobby: %s ",b);
    return 0;
}