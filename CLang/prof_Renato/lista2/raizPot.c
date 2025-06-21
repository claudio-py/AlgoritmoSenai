#include <stdio.h>
#include <math.h>

double raizOuPot(double num1, double num2){
    if(num2 == 00) return sqrt(num1);
       
    else return pow(num1,num2);

    
}

int main(){
    double num,num2, resultado;
    printf("digite o primeiro numero: \n");
    scanf("%lf", &num);

    printf("Otimo agora digite 0  para  receber a raiz quadrada ou\nqualquer outro numero para usar  como expoente:\n");
    scanf("%lf",&num2);

    resultado = raizOuPot(num,num2);

    printf("resultado: %.2lf", resultado);
}
