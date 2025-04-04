#include <stdio.h>
//Encontra vogal v1.0

int main(void)
{
 char v;

 printf("Coloque uma letra\n");
 scanf(" %c", &v);

 if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
 {
  printf("A letra \"%c\" é uma vogal",v);
 }
 else
 {
  printf("A letra %c não é vogal",v);
 }
 return 0;
}
