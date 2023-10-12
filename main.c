// Atividade em C, feita no dia 27/09/2023, questão 38.
#include <stdio.h>
 int main()
{
  float reais = 0;
  printf("Digite o valor em reais: ");
  scanf("%f", &reais);

  float dolar = reais / 5;
  printf("\nSua conversao deu %.2f dolares", dolar);

  return 0;
}
