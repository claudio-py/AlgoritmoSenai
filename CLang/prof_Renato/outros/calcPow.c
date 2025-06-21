#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <math.h>   // Biblioteca para funções matemáticas como pow() e sqrt()

int main(){
    double num1, num2, resultado;  // Declara variáveis para armazenar os números e o resultado

    // Solicita ao usuário o valor da base
    printf("Digite o valor da base: \n");
    scanf("%lf", &num1);  // Lê o valor da base

    // Solicita o valor do expoente
    printf("Agora digite o valor do expoente: \n");
    scanf("%lf", &num2);  // Lê o valor do expoente

    // Calcula a potência usando pow(base, expoente)
    resultado = pow(num1, num2);
    printf("resultado: %2.lf \n", resultado);  // Exibe o resultado da potência

    // Solicita um número para calcular a raiz quadrada
    printf("Agora vamos descobrir a raiz quadrada, Digite um numero: \n");
    scanf("%lf", &num1);  // Lê o número para calcular a raiz

    // Calcula a raiz quadrada usando sqrt()
    resultado = sqrt(num1);
    printf("resultado: %2.lf \n", resultado);  // Exibe o resultado da raiz quadrada
}
