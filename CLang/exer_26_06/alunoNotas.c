#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 50 // numero maximo de caracteres
#define NOTAS 5 // numero de notas lancadas 
//vou terminar amanha!
int main() {
  void **matriz;
  int linha;

  printf("Quantos alunos deseja cadastrar?:\n");
  scanf("%d", &linha);
  getchar();
  matriz = (void **)malloc(linha * sizeof(char *));

  if (matriz == NULL) {
    printf("Erro de alocacao!\n");
    return 1;
  }

  for (int i = 0; i < linha; ++i) {
    matriz[i] = (char *)malloc(MAXCHAR * sizeof(char));
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
    fgets(matriz[i], MAXCHAR, stdin);
    printf(" \n");
  }

  for (int i = 0; i < linha; ++i) {
    printf("%s\n", matriz[i]);
    free(matriz[i]);
  }

  free(matriz); // libera a memoria

  return 0;
}
