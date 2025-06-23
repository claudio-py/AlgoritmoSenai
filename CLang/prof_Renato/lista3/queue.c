#include <stdio.h>

int main() {
  char queue[100][30]; // an array of 30 strings with 100 elements
  char option;
  while (option != 'q') {
    printf(
        "Digite a opcao (i - inserir, e - esvaziar, l - listar, q - sair): ");
    scanf(" %c", &option);

    if (option == 'i') { // insert
      for (int i = 0; i < 100; i++) {
        if (queue[i][0] == '\0') { // if the string is empty
          printf("Digite o nome: ");
          scanf(" %[^\n]", queue[i]); // read a string with spaces
          break;
        }
      }
    } else if (option == 'e') { // empty
      for (int i = 0; i < 100; i++) {
        queue[i][0] = '\0'; // set the first character to null
      }
      printf("Fila esvaziada!\n");
    } else if (option == 'l') { // list
      printf("Fila:\n");
      for (int i = 0; i < 100; i++) {
        if (queue[i][0] != '\0') { // if the string is not empty
          printf("%s\n", queue[i]);
        }
      }
    } else if (option != 'q') {
      printf("Opcao invalida!\n");
    }
    return 0;
  }
}
