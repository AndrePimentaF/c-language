#include <stdio.h>
#include <math.h>
//Calcular quadrado múltiplos de um valor passado v1.0

int main(void)
{
 int x,res;

 printf("Coloque o valor a ser calculado:\n");
 scanf("%i", &x);

 for(int i=0; i<=x; i++)
 {
  if(i%2==0)
  {
   res=pow(i,2);
   printf("%i² = %i\n",i,res);
  }
 }
 printf("-----------------\n");
 return 0;
}
