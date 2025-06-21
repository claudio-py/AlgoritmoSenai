#include  <stdio.h>
#include <string.h>

int main(){
    char palavra1[30], palavra2[30];

    printf("digite a primeira palavra: \n");
    scanf(" %[^\n]s",palavra1);

    printf("digite a segunda palavra: \n");
    scanf("%[^\n]s",palavra2);

    if(strcmp(palavra1,palavra2)) printf("as duas palavras sao identicas");
    else printf("as duas palavras sao diferentes");

    return 0;

}