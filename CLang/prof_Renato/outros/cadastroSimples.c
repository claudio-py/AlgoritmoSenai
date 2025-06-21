#include <stdio.h>

// Declaração de variáveis globais
char nome[30];     // Armazena o nome do usuário 
int idade;         // Armazena a idade do usuário
float altura;      // Armazena a altura do usuário

int main() {
    // Exibe mensagem inicial
    printf("Bem vindo ao Cadastro \n");

    // Solicita o nome do usuário
    printf("Digite o seu nome: \n");
    scanf(" %[^\n]s", nome);  // Lê uma string sem espaços; limita-se à primeira palavra

    // Solicita a idade do usuário
    printf("Digite sua idade: \n");
    scanf(" %d", &idade);  // Lê um número inteiro

    // Solicita a altura do usuário
    printf("Digite a sua altura: \n");
    scanf(" %f", &altura);  // Lê um número de ponto flutuante

    // Exibe os dados coletados
    printf("Seu nome e: %s\n", nome);
    printf("Sua idade e : %d\n", idade);
    printf("sua altura e: %.2f\n", altura);

    return 0;  // Encerra o programa
}
