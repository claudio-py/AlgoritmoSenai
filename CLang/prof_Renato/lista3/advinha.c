#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero, chute;
  numero = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
  printf("Adivinhe o número entre 1 e 100: ");
  while (1) {
    scanf("%d", &chute);
    if (chute < numero) {
      printf("Muito baixo! Tente novamente: ");
    } else if (chute > numero) {
      printf("Muito alto! Tente novamente: ");
    } else {
      printf("Parabéns! Você acertou o número %d!\n", numero);
      break;
    }
  }
}
