#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char placa[10];
  int tem_num = 0, tem_letra = 0;

  printf("Digite apenas os quatro ultimos caracteres da placa do veiculo: ");
  scanf("%[^\n]s", placa);
  printf("Placa digitada: %d\n", isalpha(placa[1]));

  if (strlen(placa) == 4)
    for (int i = 0; placa[i]; ++i)
      if (isalpha(placa[i]))
        ++tem_letra;

  if (tem_letra > 0 && (isalpha(placa[1]) == 0)) {
    printf("placa invalida, deve conter somente uma letra\n");
    return 1;
  }

  tem_letra == 0 ? printf("formato antigo de placa\n")
                 : printf("formato novo de placa\n");

  return 0;
}
