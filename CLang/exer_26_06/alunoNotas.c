#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 50 // define uma constante em escopo global.

// Struct for a student
typedef struct {
  char *name;
  float *grades;
} Aluno; // criei meu proprio tipo de dado porque nao ?

int main() {
  int numAlunos, numNotas;

  printf("Quantos alunos? ");
  scanf("%d", &numAlunos);

  printf("Quantas notas por aluno? ");
  scanf("%d", &numNotas);

  // alocacao dinamica com base no memory block size do tipo Aluno
  Aluno *alunos = malloc(numAlunos * sizeof(Aluno));
  if (!alunos) {
    perror("malloc alunos");//usando a stdio.h para checar se alunos ta NULL
    return 1;
  }

  for (int i = 0; i < numAlunos; i++) {
    // alocacao de memoria estatica apenas para carregar os dados
    // que serao alocados na matriz dinamica, 
    // ou seja, criei um vetor intermediario.
    char buffer[MAXCHAR];

    printf("\nNome do aluno %d: ", i + 1);
    scanf(" %[^\n]", buffer);

//preparando o terrendo: alocando dinamicamente o espaco em memoria especifico 
//para o tamanho do buffer intermediario que foi criado
    alunos[i].name = malloc(strlen(buffer) + 1);

    if (!alunos[i].name) {
      perror("malloc name");
      return 1;
    }
    strcpy(alunos[i].name, buffer);

    // Allocate grades
    alunos[i].grades = malloc(numNotas * sizeof(float));
    if (!alunos[i].grades) {
      perror("malloc grades");
      return 1;
    }

    for (int j = 0; j < numNotas; j++) {
      printf("Nota %d de %s: ", j + 1, alunos[i].name);
      scanf("%f", &alunos[i].grades[j]);
    }
  }

  // Print everything
  printf("\nResumo:\n");
  for (int i = 0; i < numAlunos; i++) {
    printf("Aluno: %s\nNotas: ", alunos[i].name);
    for (int j = 0; j < numNotas; j++) {
      printf("%.2f ", alunos[i].grades[j]);
    }
    printf("\n");
  }

  // Free memory
  for (int i = 0; i < numAlunos; i++) {
    free(alunos[i].name);
    free(alunos[i].grades);
  }
  free(alunos);

  return 0;
}
