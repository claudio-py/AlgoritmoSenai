#include <stdio.h>

// Declaração de variáveis globais
int num1;           // Primeiro número fornecido pelo usuário
int num2;           // Segundo número fornecido pelo usuário
int adicao;         // Resultado da soma entre num1 e num2
int subtracao;      // Resultado da subtração entre num1 e num2
int mult;           // Resultado da multiplicação entre num1 e num2
float divisao;      // Resultado da divisão entre num1 e num2
int resto;          // Resto da divisão entre num1 e num2
char finalizar;     // Variável para pausar o programa no final

int main() {
    // Solicita o primeiro número
    printf("Digite o primeiro: \n");
    scanf(" %d", &num1);

    // Solicita o segundo número
    printf("Otimo, agora digite o segundo: \n");
    scanf(" %d", &num2);

    // Realiza operações aritméticas
    adicao = num1 + num2;
    subtracao = num1 - num2;
    mult = num1 * num2;
    divisao = (float) num1 / num2;  // Casting para obter resultado em ponto flutuante
    resto = num1 % num2;

    // Exibe os resultados
    printf("Resultados: \n");
    printf("adicao: %d\n", adicao);
    printf("subtracao: %d\n", subtracao);
    printf("multiplicacao: %d\n", mult);
    printf("divisao: %f\n", divisao);  // Corrigido: antes exibia subtracao
    printf("resto: %d\n", resto);

    // Finaliza a execução após entrada do usuário
    printf("Digite qualquer tecla para finalizar \n");
    scanf(" %c", &finalizar);

    return 0;
}
