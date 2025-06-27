#include <stdio.h>
void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int num1, num2;

  printf("digite o valor de a e b seguido de espaco: ");
  scanf(" %d %d", &num1, &num2);

  printf("valor a: %d \n valor b: %d\n", num1, num2);
  printf("trocando os valores\n");
  trocar(&num1, &num2);
  printf("valor a: %d \n valor b: %d\n", num1, num2);

  return 0;
}
