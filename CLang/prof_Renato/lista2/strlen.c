#include <stdio.h>
#include <string.h>

int main(){
char palavra[50];
int tamanho;
printf("Digite uma palavra:  ");
fgets(palavra,50,stdin);

printf("o  comprimento da string e: %d",  strlen(palavra));

}