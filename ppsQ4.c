#include <stdio.h>
#include <stdlib.h>

int main(){
    int C,F;
    printf("TEMPERATURE IN FAHRENHEIT = ");
    scanf("%d",&F);
    C = (F-32)*5/9;
    printf("TEMPERATURE IN CELSIUS =%d",C);
    return 0;
}
