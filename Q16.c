#include<stdio.h>
#include<stdlib.h>

int main(){
    double a,b,c;
    printf("ENTER FIRST NUMBER = ");
    scanf("%lf",&a);
    printf("ENTER SECOND NUMBER = ");
    scanf("%lf",&b);
    c=a;
    a=b;
    b=c;

    printf("\nAFTER SWAPPING FIRST NUMBER = %.2lf\n",a);
    printf("AFTER SWAPPING SECOND NUMBER = %.2lf\n",b);

return 0;
}
