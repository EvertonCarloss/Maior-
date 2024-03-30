#include <stdio.h>

int main() {

  int a, b, c, maior;

  // Leitura dos três valores
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);

  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  printf("Digite o terceiro valor: ");
  scanf("%d", &c);

  // Cálculo do maior entre a e b
  maior = (a > b) ? a : b;

  /* Comparação do maior entre a e b com c
  if (c > maior) {
    maior = c;
  }

  // Impressão do maior valor
  printf("%d eh o maior\n", maior);

  return 0;
}
