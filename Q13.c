#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    double A,B;
    printf("ENTER AN OPERATOR (+,-,*,/) : ");
    scanf("%c",&op);
    printf("ENTER TWO OPERANDS = ");
    scanf("%lf%lf",&A,&B);

    switch(op){
case'+':
    printf("%.1lf + %.1lf = %.1lf",A,B,A+B);
    break;
case'-':
    printf("%.1lf - %.1lf = %.1lf",A,B,A-B);
    break;
case'*':
    printf("%.1lf * %.1lf = %.1lf",A,B,A*B);
    break;
case'/':
    printf("%.1lf / %.1lf = %.1lf",A,B,A/B);
    break;
    }
return 0;
}
