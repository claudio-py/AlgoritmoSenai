#include <ctype.h>
#include <stdio.h>

int main() {
  char senha[30];
  int i = 0;

  printf("Digite um cpf valido com 11 digitos, sem espaco e sem tracos:\n");
  scanf("%[^\n]s", senha);

  while (senha[i]) {
    if (isalpha(senha[i])) {
      printf("CPF invalido, nao pode conter letras.\n");
      return 0;
    }
    if (i > 11) {
      printf("CPF invalido, deve conter exatamente 11 digitos.\n");
      return 0;
    }

    i++;
  }

  i == 11 ? printf("CPF valido.\n")
          : printf("CPF invalido, deve conter exatamente 11 digitos.\n");

  return 0;
}
