#include <stdio.h>

int main() {
  float temp;
  printf("aperte enter para iniciar");
  while ((getchar() != EOF)) {
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);

    temp >= 30 ? printf("ligar ventilador\n") : printf("desligar ventilador\n");
  }
}
