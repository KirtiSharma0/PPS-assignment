#include<stdio.h>
int main(){
    char ch;
    printf("ENTER ANY ALPHABET = ");
    scanf("%c",& ch);

    if(ch>='A' && ch<='Z')
    {
        printf("ALPHABET IS AN UPPERCASE");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("ALPHABET IS LOWERCASE");
    }
    else{
        printf("IT IS NOT ANY ALPHABET");
    }
    return 0;
}
