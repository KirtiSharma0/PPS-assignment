#include <stdio.h>
#include <stdlib.h>
int main(){
    int year;
    printf("ENTER YEAR = ");
    scanf("%d",& year);

    if(((year%4 == 0) && (year%100 != 0)) || (year%400 ==0))
    {
        printf("IT IS A LEAP YEAR");
    }
    else {
        printf("IT IS A COMMON YEAR");
    }
    return 0;
}
