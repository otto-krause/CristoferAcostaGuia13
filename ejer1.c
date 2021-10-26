#include <stdio.h>
#include <stdlib.h>

void main()
{
 int resistencias[6]={0},I=1;
 printf("ingrese resistencias\n");
 for (I=1;I<6;I++) {
 scanf("%d", &resistencias[I]);
 }
 for (I=1;I<6;I++) {
resistencias[0]=resistencias[0]+resistencias[I];
 }
system ("cls");
 printf("%d", resistencias[0]);
}
