#include <stdio.h>
#include <stdlib.h>

int main(){
   int R,Perimeter,Area;
   float pi=3.14;
   printf("VALUE OF RADIUS = ");
   scanf("%d",&R);

   Perimeter = 2*pi*R;
   printf("PERIMETER OF A CIRCLE =%d",Perimeter);

   Area = pi*R*R;
   printf("\nAREA OF A CIRCLE =%d",Area);
   return 0;

}
