#include <stdio.h>

int adicionar(int num1, int num2){
    return num1 + num2;
}

int subtrair(int num1, int num2){
    return num1 - num2;
}

int main() {

    int num1;
    int num2;
    char operator;
    int resultado;
    

    printf("Digite o primeiro numero: \n");
    scanf(" %d", &num1);

    printf("Digite a operacao (-/+): \n");
    scanf(" %c", &operator);

    printf("Digite o segundo numero: \n");
    scanf(" %d", &num2);

    switch (operator) {
        case '-':
           
            resultado = subtrair(num1,num2);
            printf("resultado: %d\n", resultado);
            break;
        case '+':
           
            resultado = adicionar(num1,num2);
            printf("resultado: %d\n", resultado);
            break;
        default:
            printf("Desculpe nao temos essa operacao");
        break;
        
}
    return 0;

}