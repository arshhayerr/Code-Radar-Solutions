#include<stdio.h>
int main(){
    int a;
    for (int i=1;i<=a;i++){
        for(int j=1;j<=a-i+1;j++){
            printf("*");
        }else {
            print("\n");
        }
    }
    return 0;
}