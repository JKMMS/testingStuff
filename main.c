#include <stdio.h>  //Biblioteca padrão de entrada e saida de dados
#include <stdlib.h> //Biblioteca padrão das outras coisas

int main (void){ //Funcção principal

  int x = 0, y = 0; //Declaração de duas variaveis inteiras chamadas x e y inicializadas em 0

  printf("Digite um numero: ");
  scanf("%i", &x);

  printf("Digite outro numero: ");
  scanf("%i", &y);

  printf("A soma de %i e %i resulta em %i.", x, y, x + y);

  return 0;

}
