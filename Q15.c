#include<stdio.h>
#include<stdlib.h>

int main(){
     int t1 = 0, t2=1, next term=0,n;
    printf("ENTER A POSITIVE NUMBER = ");
    scanf("%d",&n);

    printf("FIBONACCI SERIES:%d,%d",t1,t2);
    next term = t1+t2;

    while(next term <= n){
        printf("%d",next term);
        t1=t2;
        t2=next term;
        next term = t1+t2;
    }
return 0;

}
