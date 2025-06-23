#include <stdio.h>

int main() {
  float salario, despesas, saldo;

  printf("Digite o valor do salario: ");
  scanf("%f", &salario);

  printf("Digite o valor das despesas: ");
  scanf("%f", &despesas);

  saldo = salario - despesas;

  if (saldo < 0) {
    printf("Saldo negativo: %.2f\n", saldo);
  } else {
    printf("Saldo positivo: %.2f\n", saldo);
  }

  return 0;
}
