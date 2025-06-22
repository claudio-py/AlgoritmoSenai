#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
	printf("Altura invalida!\n");
	return 1;
    }

    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
	printf("Abaixo do peso\n");
    } else if (imc < 24.9) {
	printf("Peso normal\n");
    } else if (imc < 29.9) {
	printf("Sobrepeso\n");
    } else {
	printf("Obesidade\n");
    }

    return 0;
}
