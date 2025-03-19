// Your code here...
#include <stdio.h>
void d(unsigned int n)
{
    if(n==0)
    {
        printf("0");
        return;
    }
    int binary[32];
    int index=0;
    while(n>0)
    {
        binary[index++]=n%2;
        n/=2;
    }
    for(int i=index-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    d(n);
    printf("\n");
    return 0;
}