#include <stdio.h>

int main() {
  char tipo;
  printf("aperte enter para iniciar\n");
    printf("ou pressione Ctrl+D para sair:\n");

  while ((tipo = getchar()) != EOF) {
    printf("digite qual o tipo de veiculo:\n");
    printf("A - moto\n");
    printf("B - carro\n");
    printf("C - caminhão\n");

    if (tipo == 'A')
      printf("O valor do pedágio é R$ 2,00\n");

    if (tipo == 'B')
      printf("O valor do pedágio é R$ 3,50\n");

    if (tipo == 'C')
      printf("O valor do pedágio é R$ 5,00\n");

  }

  return 0;
}
