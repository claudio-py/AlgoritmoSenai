#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main(){
    int num = 1, acc = 0;  // Inicializa 'num' com 1 para entrar no loop e 'acc' como acumulador

    // Mensagem inicial ao usuário
    printf("Digite qualquer numero para adicionar ao contador ou digite 0 para sair: \n");

    // Loop que continua enquanto 'num' for maior que 0
    while(num > 0){
        printf("-> ");  // Prompt para o usuário digitar um número
        scanf(" %d", &num);  // Lê o número digitado
 
        acc += num;  // Soma o número ao acumulador
    }

    // Exibe o total acumulado
    printf(" o total digitado foi: %d", acc);
}