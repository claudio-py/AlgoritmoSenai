#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main(){
    int i, num, counter = 0;  // Declara as variáveis: 'i' para o loop, 'num' para o número digitado, e 'counter' para contar os números pares

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: \n");
    scanf(" %d", &num);  // Lê o número digitado pelo usuário

    // Loop que vai de 0 até o número digitado (inclusive)
    for(i = 0; i <= num; i++){
        // Verifica se o número atual 'i' é par
        if(i % 2 == 0){
            counter++;  // Se for par, incrementa o contador
        }
    }

    // Exibe a quantidade de números pares encontrados no intervalo
    printf("Foram contados %d numeros pares", counter);

    return 0;  // Finaliza o programa com sucesso
}
