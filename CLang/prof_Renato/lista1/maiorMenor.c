#include <stdio.h>

// Declaração de variáveis globais
int num1, num2;  // Armazenam os dois números fornecidos pelo usuário

int main() {
    // Solicita o primeiro número
    printf("Digite um numero ai vai: \n");
    scanf("%d", &num1);

    // Solicita o segundo número
    printf("Agora digite outro ai, faz favor: \n");
    scanf("%d", &num2);

    // Compara os dois números e determina o maior ou se são iguais
    if (num1 > num2) {
        printf("o maior numero e %d", num1);
    } else if (num2 > num1) {
        printf("o maior numero e %d", num2);
    } else {
        printf("opa os numero sao iguais");
    }

    return 0; // Encerra o programa
}