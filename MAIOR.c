#include <stdio.h>
#include <locale.h>

void main () {
 setlocale(LC_ALL,"Portuguese");


int n1, n2;

printf("DIGITE O PRIMEIRO N�MERO:  ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO N�MERO:  ");
scanf("%d",&n2);

int maior = (n1>n2)?n1:n2;
int menor = (n1<n2)?n1:n2;

printf("ENTRE OS VALORES %d E %d.\n O MAIOR � %d\n E O MENOR � %d",n1,n2,maior,menor);



}
