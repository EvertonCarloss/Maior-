#include <stdio.h>

int main() {

  int a, b, c, maior;

  // Leitura dos tr�s valores
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);

  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  printf("Digite o terceiro valor: ");
  scanf("%d", &c);

  // C�lculo do maior entre a e b
  maior = (a > b) ? a : b;

  /* Compara��o do maior entre a e b com c
  if (c > maior) {
    maior = c;
  }

  // Impress�o do maior valor
  printf("%d eh o maior\n", maior);

  return 0;
}
