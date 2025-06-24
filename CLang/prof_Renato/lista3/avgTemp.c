#include <stdio.h>

int main() {
  float temp[24];
  float sum = 0.0, avg = 0.0;
  int i;

  printf("vamos comecar? digite ctrl + D para sair a qualquer momento\n");
  printf("Digite a temperatura de cada hora do dia a seguir:\n");
  for (i = 0; ((scanf("%f", &temp[i])) != EOF) && i <= 24 ; i++) {
    sum += temp[i];
  }
  printf("%d temperaturas foram lidas.\n", i);
  avg = sum / i;
  printf("A temperatura media do dia foi: %.2f\n", avg);
  return 0;
}
