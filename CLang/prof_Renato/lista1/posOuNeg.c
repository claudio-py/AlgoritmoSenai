#include <stdio.h>

// Declaração de variável global
int num;  // Armazena o número digitado pelo usuário

int main() {
    // Solicita ao usuário que digite um número
    printf("Digite um numero: \n");
    scanf("%d", &num);

    // Verifica se o número é positivo, negativo ou neutro (zero)
    if (num > 0) {
        printf("Este numero e positivo");
    } else if (num < 0) {
        printf("Este numero e negativo");
    } else {
        printf("Este numero e neutro");
    }

    return 0; // Encerra o programa
}
