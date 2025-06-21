#include <stdio.h>

// Função que calcula a média de três notas
float media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

// Declaração de variáveis globais
float nota1;         // Primeira nota
float nota2;         // Segunda nota
float nota3;         // Terceira nota
float resultado;     // Armazena o resultado da média
char finalizar;      // Utilizado para pausar o programa ao final

int main() {
    // Solicita as três notas ao usuário
    printf("Digite o primeiro numero: \n");
    scanf(" %f", &nota1);

    printf("Digite o segundo numero: \n");
    scanf(" %f", &nota2);
    
    printf("Digite o terceiro numero: \n");
    scanf(" %f", &nota3);

    // Calcula a média usando a função definida
    resultado = media(nota1, nota2, nota3);

    // Exibe o resultado com duas casas decimais
    printf("A media da nota e: %.2f \n", resultado);

    // Verifica se o aluno foi aprovado ou reprovado
    printf("Portanto o aluno esta ");
    if (resultado < 6) {
        printf("REPROVADO\n");
    } else {
        printf("APROVADO\n");
    }

    // Finaliza a execução após entrada do usuário
    printf("Digite qualquer tecla para finalizar \n");
    scanf(" %c", &finalizar); 

    return 0;
}
