#include <stdio.h>
// este sistema dispoes de algumas opcoes de cafe o usuario escolhe quais e
// quantos em seguida o programa computa o valor do pedido
int main() {
  int opcao, quantidade;
  float preco, total = 0.0;

  printf("Bem-vindo a maquina de cafe!\n");
  printf("Escolha uma opcao:\n");
  printf("1 - Cafe preto (R$ 2.00)\n");
  printf("2 - Cafe com leite (R$ 3.50)\n");
  printf("3 - Cappuccino (R$ 4.00)\n");
  printf("4 - Expresso (R$ 2.50)\n");
  printf("5 - Sair\n");

  while (1) {
    printf("Digite o numero da opcao: ");
    scanf("%d", &opcao);

    if (opcao == 5) {
      break;
    }

    if (opcao < 1 || opcao > 5) {
      printf("Opcao invalida! Tente novamente.\n");
      continue;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (opcao) {
    case 1:
      preco = 2.00;
      break;
    case 2:
      preco = 3.50;
      break;
    case 3:
      preco = 4.00;
      break;
    case 4:
      preco = 2.50;
      break;
    }

    total += preco * quantidade;
    printf("Pedido adicionado: %d x R$ %.2f = R$ %.2f\n", quantidade, preco,
           preco * quantidade);
  }

  printf("Total a pagar: R$ %.2f\n", total);
  return 0;
}
