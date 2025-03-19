// Your code here...
#include <stdio.h>
int gp(int n) {
    int position=0;
    while(n>0) 
    {
        if(n&1) 
        {
            return position;
        }
        position++;
        n>>=1;
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    int r=gp(n);
    printf("%d\n",r);
    return 0;
}