#include <stdio.h>
#include <stdlib.h>

int main (void){

  int x = 0, y = 0;

  printf("Digite um numero: ");
  scanf("%i", &x);

  printf("Digite outro numero: ");
  scanf("%i", &y);

  printf("A soma de %i e %i resulta em %i.", x, y, x + y);

  return 0;

}