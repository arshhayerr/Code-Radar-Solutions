// #include <stdio.h>

// int welcome(char c) {
//     if(c=='a' ||c=='e' || c=='i' || c=='o' || c=='u' ||
//     c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
//         return "Vowel";
//     }else if((c>='a' && c<='z') ||(c>='A' && c<='Z') ){
//         return "Consonant";
//     }else if (c>='0' && c<='9'){
//         return "Digit";
//     }
//     else{
//         return "Special Character";
//     }
//     return 0;
// }
// int main() {
//     char c;
//     scanf("%c",&c);
//     printf("%s", welcome(c));
//     return 0;
//} 
#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("Vowel");
    }
    else if(c=='b'||c=='c'||c=='d'||c=='f'||c=='g'||c=='h'||c=='j'||c=='k'||c=='l'||c=='m'||c=='n'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='v'||c=='w'||c=='x'||c=='y'||c=='z'||(c>='A'&& c<='Z'))
    {
        printf("Consonant");
    }
    else if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9')
    {
        printf("Digit");
    }
    else 
    {
        printf("Special Character");
    }
    return 0;

}