#include <stdio.h>

/**
 * Função para inserir um nome na fila.
 * Recebe a fila e seu tamanho.
 */
void inserir(char fila[][30], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    if (fila[i][0] == '\0') { // Verifica se a posição está vazia
      printf("Digite o nome: ");
      scanf(" %[^\n]", fila[i]); // Lê uma string com espaços
      break;
    }
  }
}

/**
 * Função para esvaziar toda a fila.
 * Define todas as posições como vazias.
 */
void esvaziar(char fila[][30], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    fila[i][0] = '\0'; // Define o primeiro caractere como nulo (string vazia)
  }
  printf("Fila esvaziada!\n");
}

/**
 * Função para listar os nomes presentes na fila.
 */
void listar(char fila[][30], int tamanho) {
  printf("Fila:\n");
  for (int i = 0; i < tamanho; i++) {
    if (fila[i][0] != '\0') { // Verifica se a posição não está vazia
      printf("%d. %s\n", i + 1, fila[i]);
    }
  }
}

/**
 * Função principal.
 * Controla o menu de opções e executa as operações na fila.
 */
int main() {
  char fila[100]
           [30]; // Vetor de 100 strings, cada uma com até 29 caracteres + '\0'
  char opcao;

  esvaziar(fila, 100); // Inicializa a fila esvaziando-a

  printf("Pressione Enter para iniciar o programa.\n");
  while ((opcao = getchar()) != EOF) {
    printf("\nDigite a opcao:\n");
    printf("i - Inserir\n");
    printf("e - Esvaziar\n");
    printf("l - Listar\n");
    printf("Digite: ");

    opcao = getchar();

    if (opcao == 'i')
      inserir(fila, 100);
    if (opcao == 'e')
      esvaziar(fila, 100);
    if (opcao == 'l')
      listar(fila, 100);

  }
}
