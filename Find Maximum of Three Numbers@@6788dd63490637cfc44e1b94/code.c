#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if( a >= b and a >= c){
        max=a;
    }
    else if (b >= a and b >= c){
        max=b;
    }
    else{
        max=c;
    }
    printf("Maximum number is: %d\n",max);
    return 0;
}