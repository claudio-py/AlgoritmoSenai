#include <stdio.h>

// Declaração de variável global
int num;  // Armazena o número inteiro digitado pelo usuário

int main() {
    // Solicita ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: \n");
    scanf(" %d", &num);

    // Verifica se o número é par ou ímpar
    if (num % 2 == 0) {
        printf("Parabens, este numero e par.\n");
    } else {
        printf("Infelizmente, seu numero e impar.\n");
    }

    return 0; // Encerra o programa
}
