#include <stdio.h>

//Programa que multiplica o primeiro interio informado com o segundo inteiro
int main(){

  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
}