#include <stdio.h>

int main() {
  float saque, acc;
  int c100, c50, c20, c10, c5, c2, c1;
  printf("Quanto voce gosstaria de sacar?\n");
  scanf("%f", &saque);

  while (saque > 0) {
    for (c100 = 0; saque >= 100; c100++) saque -= 100;

    for (c50 = 0; saque >= 50; c50++) saque -= 50;

    for (c20 = 0; saque >= 20; c20++) saque -= 20;

    for (c10 = 0; saque >= 10; c10++) saque -= 10;

    for (c5 = 0; saque >= 5; c5++) saque -= 5;

    for (c2 = 0; saque >= 2; c2++) saque -= 2;

    for (c1=0;saque >= 1; c1++) saque -= 1;
  }

  if (c100 > 0) printf("foram sacado %d nota de 100\n", c100);

  if (c50 > 0) printf("foram sacado %d nota de 50\n", c50);

  if (c20 > 0) printf("foram sacado %d nota de 20\n", c20);

  if (c10 > 0) printf("foram sacado %d nota de 10\n", c10);

  if (c5 > 0) printf("foram sacado %d nota de 5\n", c5);

  if (c2 > 0) printf("foram sacado %d nota de 2\n", c2);

  if (c1 > 0) printf("foram sacado %d nota de 1\n", c1);

  return 0;
}
