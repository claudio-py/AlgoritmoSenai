#include <ctype.h>
#include <stdio.h>

int main() {
  char senha[30];
  int i = 0, tem_num = 0, tem_letra = 0;

  printf("Digite uma senha maior de 8 caracteres e menor de 30 que contenha "
         "letras e numeros\n");
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
  if (i < 8 || i > 30) {
    printf("Senha invalida, deve conter entre 8 e 30 caracteres.\n");
  } else if (tem_num && tem_letra) {
    printf("Senha valida.\n");
  } else {
    printf("Senha invalida, deve conter pelo menos uma letra e um numero.\n");
  }

  return 0;
}
