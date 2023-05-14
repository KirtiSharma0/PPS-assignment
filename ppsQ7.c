#include <stdio.h>
#include <stdlib.h>
int main(){
       char ch;
       printf("ENTER ANY CHARACTER = ");
       scanf("%c",&ch);

       if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       {
           printf("CHARACYER IS AN ALPHABET");
       }
       else {
        printf("CHARACTER IS NOT AN ALPHABET");
       }
       return 0;
}






