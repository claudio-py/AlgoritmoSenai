#include <stdio.h>

int main() {
  char tipo;
  prinf("aperte enter para iniciar\n");
  while ((tipo = getchar()) != EOF) {
    printf("digite qual o tipo de veiculo:\n");
    printf("A - moto\n");
    printf("B - carro\n");
    printf("C - caminhão\n");
    if (tipo == 'A') {
      printf("O valor do pedágio é R$ 2,00\n");
    } else if (tipo == 'B') {
      printf("O valor do pedágio é R$ 3,50\n");
    } else if (tipo == 'C') {
      printf("O valor do pedágio é R$ 5,00\n");
    } else {
      printf("Tipo de veículo inválido.\n");
    }
    printf("Digite outro tipo de veículo ou pressione Ctrl+D para sair:\n");
  }
  return 0;
}
