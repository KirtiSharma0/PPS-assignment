#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("ENTER ANY NUMBER = ");
    scanf("%d",&num);

    if((num%5==0) && (num%11==0))
    {
        printf("NUMBER IS DIVISIBLE BY 5 AND 11");
    }
    else{
        printf("NUMBER IS NOT DIVISIBLE BY 5 AND 11");
    }
    return 0;
}
