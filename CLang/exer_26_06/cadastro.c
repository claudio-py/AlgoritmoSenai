#include <stdio.h>
#include <stdlib.h>
#define MAX 50 // numero maximo de caracteres

int main() {
  char **matriz;
  int linha, coluna = MAX;

  printf("Quantos alunos deseja cadastrar?:\n");
  scanf("%d", &linha);
  getchar();
  matriz = (char **)malloc(linha * sizeof(char *));

  if (matriz == NULL) {
    printf("Erro de alocacao!\n");
    return 1;
  }

  for (int i = 0; i < linha; ++i) {
    matriz[i] = (char *)malloc(coluna * sizeof(char));
    if (matriz[i] == NULL) {
      printf("Erro de alocacao!\n");
      for (int k = 0; k < i; ++k)
        free(matriz[k]);
      free(matriz);
      return 1;
    }
  }

  for (int i = 0; i < linha; ++i) {
    printf("aluno %d : ", i + 1);
    fgets(matriz[i], coluna, stdin);
    printf(" \n");
  }

  for (int i = 0; i < linha; ++i) {
    printf("%s\n", matriz[i]);
    free(matriz[i]);
  }

  free(matriz); // libera a memoria

  return 0;
}
