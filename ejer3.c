#include <stdio.h>
#include <stdlib.h>

int main()
{
 int inferior[0]={0}, superior=0, I=0;
 printf( "\n Introduzca nucmero (entero) inferior: " );
 scanf( "%d", &inferior );
 printf( "\n Introduzca nucmero (entero) superior: " );
 scanf( "%d", &superior );
 printf( "\n " );
 for (I=inferior[0]+1;I<superior;I++){
 printf("%d\t", I);
 }
}
