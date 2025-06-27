#include <stdio.h>
#include <stdlib.h>

int main() {
  int *vetor;
  int tamanho;
  printf("Digite o tamanho do vetor: \n");
  scanf("%d", &tamanho);

  vetor = (int *)malloc(tamanho * sizeof(int));

  if (vetor == NULL) {
    printf("Erro de alocacao!\n");
    return 1;
  }

  for (int i = 0; i < tamanho; ++i) {
    printf("Valor: %d\n", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("Valores inseridos: \n");
  for (int i = 0; i < tamanho; ++i) {
    printf("%d\n", vetor[i]);
  }

 free(vetor);//libera a memoria 
  return 0;
}
