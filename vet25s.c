#include <stdio.h>

/*Somar dois vetores de tamanho 25 v1.0
 -Armazenar resultado em terceiro vetor */

int main(void)
{
 int vt1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
 int vt2[] = {26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
 int vt3[25];

 for(int i=0; i<25; i++)
 {
  printf("Número: %d\n", vt1[i]);
 }
 for(int i=0; i<25; i++)
 {
  printf("Número2: %d\n",vt2[i]);
 }
 for(int i=0; i<25; i++)
 {
  vt3[i]=vt1[i]+vt2[i];
  printf("Número3:[%d] = %d\n",i,vt3[i]);
 }
 return 0;
}


