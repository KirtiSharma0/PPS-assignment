#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    printf("ENTER ANY CHARACTER = ");
    scanf("%c",&ch);

    if(char=='a'||char=='e'||char=='i'||char=='o'||char=='u'||char=='A'||char=='E'||char=='I'||char=='O'||char=='U')
    {
        printf("%c IS VOWEL",ch);
    }


    else((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("%c IS CONSONANT",ch);
    }
    return 0;
    }




