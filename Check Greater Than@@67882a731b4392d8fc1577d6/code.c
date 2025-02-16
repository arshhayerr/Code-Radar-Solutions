#include <stdio.h>
int main(){
    int a,b;
    printf("Value of a: ");
    scanf("%d",&a);
    printf("Value of b:");
    scanf("%d",&b);
    
    if (a>b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}