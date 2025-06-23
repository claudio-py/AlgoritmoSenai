
#include <ctype.h>
#include <stdio.h>

int main() {
  char senha[30];
  int i = 0, tem_num = 0, tem_letra = 0;

  printf("Digite um cpf valido com 11 digitos, sem espaco e sem tracos:\n");
  scanf("%[^\n]s", senha);

  while (senha[i]) {
    if (isdigit(senha[i])) {
      tem_num = 1;
    }
    if (isalpha(senha[i])) {
      tem_letra = 1;
    }
    i++;
  }
  if (tem_letra) {
    printf("CPF invalido, nao pode conter letras.\n");
  }else if (tem_num && i == 11) {
    printf("CPF valido.\n");
  } else {
    printf("CPF invalido, deve conter exatamente 11 digitos.\n");
  }
}
