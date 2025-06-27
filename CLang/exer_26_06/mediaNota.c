#include <stdio.h>
#include <stdlib.h>

int main() {
  float *vetor, media, acc = 0, maior;
  int tamanho, top = 0;

  printf("Digite quantas notas serao computadas: \n");
  scanf("%d", &tamanho);

  vetor = (float *)malloc(tamanho * sizeof(float));

  if (vetor == NULL) {
    printf("Erro de alocacao!\n");
    return 1;
  }

  for (int i = 0; i < tamanho; ++i) {
    printf("Valor: %d\n", i + 1);
    scanf("%f", &vetor[i]);
    acc += vetor[i];
  }

  printf("Valores inseridos: \n");
  for (int i = 0; i < tamanho; ++i) {
    printf("%.2f | ", vetor[i]);
  }

  media = acc / tamanho;

  printf("\na media de notas foi: %.2f\n", media);
  for (int i = 0; i < tamanho; ++i) {
    if (maior < vetor[i])
      maior = vetor[i];
    if (vetor[i] > media)
      ++top;
  }
  printf("o numero de alunos acima da media foi de: %d\n", top);
  printf("e a maior nota foi de %f\n", maior);

  free(vetor); // libera a memoria
  return 0;
}
