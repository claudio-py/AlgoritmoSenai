#include <stdio.h>
#include <string.h>

int main(){
char palavra1[30],   palavra2[30], resultado[60]="";

printf("digite a primeira palavra:\n");
// fgets(palavra1,30,stdin);
scanf(" %[^\n]s",palavra1);

printf("digite a segunda palavra: \n");
// fgets(palavra2,30,stdin);
scanf(" %[^\n]s",palavra2);

printf("\n");
strcat(resultado, palavra1);
strcat(resultado, " ");
strcat(resultado, palavra2);
printf("%s", resultado);


}