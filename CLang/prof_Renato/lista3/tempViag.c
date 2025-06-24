#include <stdio.h>

int main() {
  float tempo, dist, veloc;
  printf("Digite  a distancia da viagem em km: \n");
  scanf("%f", &dist);

  printf("Digite a velocidade media em km/h: \n");
  scanf("%f", &veloc);

  tempo = dist / veloc;
  printf("O tempo da viagem e de %.2f horas\n", tempo);
}
