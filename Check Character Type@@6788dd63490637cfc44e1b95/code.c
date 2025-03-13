#include <stdio.h>

int welcome (char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return "Vowels";
    }
    else if((c>='a'&&c<='z') || (c>='A' &&c<='Z')){
        return "Consonant";
    }
    else if(c>='0'&&c<='9'){
        return "Digits";
    }
    else{
        return "Special Character";
    }
    return 0;
}

int main(){
    char x;
    scanf("%c",&x);
    printf("%s",welcome(x));
    returnn 0;
}