#include <stdio.h>
#include <stdlib.h>

int main() {
  int **matriz;
  int linha, coluna, acc = 0;

  printf("numero de linhas: ");
  scanf("%d", &linha);

  matriz = (int **)malloc(linha * sizeof(int *));

  if (matriz == NULL) {
    printf("Erro de alocacao!\n");
    return 1;
  }

  printf("numero de colunas: ");
  scanf("%d", &coluna);

  for (int i = 0; i < linha; ++i) {
    matriz[i] = (int *)malloc(coluna * sizeof(int));
    if (matriz[i] == NULL) {
      printf("Erro de alocacao!\n");
      return 1;
    }
  }

  for (int i = 0; i < linha; ++i) {
    for (int j = 0; j < coluna; ++j) {
      printf("linha: %d | coluna: %d\n", i + 1, j + 1);
      printf("valor: ");
      scanf("%d", &matriz[i][j]);
      printf(" \n");
      acc += matriz[i][j];
    }
    free(matriz[i]);
    printf(" \n");
  }
  free(matriz); // libera a memoria

  printf("o valor total e de: %d", acc);

  return 0;
}
