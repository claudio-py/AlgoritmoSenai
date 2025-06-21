#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main(){
    int num;  // Declara a variável que armazenará o número digitado pelo usuário
    // Solicita ao usuário que digite um número
    printf("Digite um numero: \n");
    scanf(" %d", &num);  // Lê o número digitado

    // Loop que imprime os números de 'num' até 0 (inclusive), decrementando 1 a cada iteração
    do{
        printf("-> %d \n", num);  // Exibe o valor atual de 'num'
        num--;  // Decrementa 'num'
    }while(num >= 0);

    return 0;  // Encerra o programa com sucesso
}
