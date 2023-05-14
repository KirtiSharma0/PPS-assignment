#include<stdio.h>
 int main(){
    char ch;
    printf("ENTER ANY CHARACTER = ");
    scanf("%c",&ch);

if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
    printf("%c IS AN ALPHABET",ch);
}
else if(ch>='0' && ch<='9'){
    printf("%c IS A NUMBER",ch);
}
else{
    printf("%c IS A SPECIAL CHARACTER",ch);
}
return 0;
}
