#include <stdio.h>

// Declaração de variáveis globais
float temp, ferenheit;  // 'temp' armazena a temperatura em Celsius, 'ferenheit' armazenará o resultado em Fahrenheit

int main() {
    // Solicita ao usuário a temperatura em Celsius
    printf("Digite a temperatura em celcius: \n");
    scanf("%f", &temp);

    // Converte a temperatura para Fahrenheit usando a fórmula: (C × 9/5) + 32
    ferenheit = (temp * 9 / 5) + 32;

    // Exibe o resultado da conversão com duas casas decimais
    printf("A temperatura em farenheit e: %.2f\n", ferenheit);

    return 0; // Encerra o programa
}
