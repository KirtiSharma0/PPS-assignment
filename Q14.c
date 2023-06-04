#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,factorial=1, number;
    printf("ENTER ANY NUMBER = ");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        factorial = factorial*i;
    }
    printf("FACTORIAL OF %d is = %d",number,factorial);

    return 0;
}
