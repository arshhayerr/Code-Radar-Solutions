// #include<stdio.h>
// int main()
// {
//     int a,b,c,max;
//     printf("Enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     if( a >= b && a >= c ){
//         max=a;
//     }
//     else if ( b >= a && b >= c ){
//         max=b;
//     }
//     else{
//         max=c;
//     }
//     printf("Maximum number is: %d\n",max);
//     return 0;
// }
#include <stdio.h>
int main()
{    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>c && b>a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;

}