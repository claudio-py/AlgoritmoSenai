#include <stdio.h>


int main()
{
    float num1 = 0,acc = 0;
    char op;

    printf("\n\nbem  vindo a calculadora, digite o numero que vai operar\ne em seguida se e um numero positivo ou negativo\nou digite zero  a qualquer momento para exibir o resultado.\n");

    while (1)
    {

        printf("digite o numero: ");
        scanf(" %f", &num1);
        if (num1 == 0)
            break;

        printf("digite o sinal se e positivo ou negativo(- ou +) \n");
        scanf(" %c", &op);
        if (num1 == 0)
            break;

        switch (op)
        {
        case '+':
            acc += num1;
            break;
        case '-':
            acc -= num1;
        }
    }
    printf("resultado: %2.f", acc);
    return 0;
}