#include <ctype.h>   // Para isdigit e isalpha
#include <stdio.h>   // Para entrada/saída padrão
#include <string.h>  // Para manipulação de strings

int main() {
  // Declaração das variáveis
  char userName[30], email[30], password[30], compEmail[30], compPassword[30];

  while (1) {
    int tem_num = 0, tem_letra = 0;

    // Solicita nome de usuário
    printf("Digite seu nome de usuário:\n");
    fgets(userName, sizeof(userName), stdin);
    userName[strcspn(userName, "\n")] = '\0'; // Remove o \n

    // Loop para validar email
    while (1) {
      printf("Digite seu email:\n");
      fgets(email, sizeof(email), stdin);
      email[strcspn(email, "\n")] = '\0'; // Remove o \n

      // Verifica se contém '@' e '.'
      if (strchr(email, '@') == NULL || strchr(email, '.') == NULL) {
        printf("Email inválido, deve conter '@' e '.'\n");
        continue;
      }
      break; // Email válido
    }

    // Loop para validar senha
    while (1) {
      printf("Digite sua senha:\n");
      fgets(password, sizeof(password), stdin);
      password[strcspn(password, "\n")] = '\0'; // Remove o \n

      if (strlen(password) < 8) {
        printf("Senha muito curta, deve conter no mínimo 8 caracteres\n");
        continue;
      }

      // Verifica se tem pelo menos uma letra e um número
      tem_num = tem_letra = 0; // Reinicia os flags
      for (int i = 0; password[i] != '\0'; ++i) {
        if (isdigit((unsigned char)password[i]))
          tem_num = 1;
        if (isalpha((unsigned char)password[i]))
          tem_letra = 1;
      }

      if (tem_letra && tem_num) {
        break; // Senha válida
      } else {
        printf("A senha deve conter pelo menos um número e uma letra\n");
        continue;
      }
    }

    // Confirmação de email e senha
    printf("Agora digite novamente sua senha e seu email para confirmar,\n"
           "se você errar terá que repetir todo o processo novamente!\n");

    // Confirma email
    printf("Email: ");
    fgets(compEmail, sizeof(compEmail), stdin);
    compEmail[strcspn(compEmail, "\n")] = '\0';

    // Confirma senha
    printf("Senha: ");
    fgets(compPassword, sizeof(compPassword), stdin);
    compPassword[strcspn(compPassword, "\n")] = '\0';

    // Compara os valores originais com os digitados novamente
    if (strcmp(email, compEmail) != 0 || strcmp(password, compPassword) != 0) {
      printf("Email ou senha incorretos, tente novamente!\n");
      continue;
    }

    // Cadastro bem-sucedido
    printf("Cadastro realizado com sucesso!\n");
    break;
  }

  return 0;
}

