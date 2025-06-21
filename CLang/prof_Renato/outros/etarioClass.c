#include <stdio.h>

int main() {
    int idade;           // Armazena a idade informada pelo usuário
    char finalizar;      // Variável utilizada para pausar o programa no final

    // Solicita a idade do usuário
    printf("Digite a sua idade: \n");
    scanf(" %d", &idade);

    // Verifica a faixa etária informada
    if (idade < 18) {
        printf("Menor de idade\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Maior de idade\n");
    } else {
        printf("Idoso\n");
    }

    // Finaliza a execução após entrada do usuário
    printf("Digite qualquer tecla para finalizar \n");
    scanf(" %c", &finalizar); 

    return 0;
}
