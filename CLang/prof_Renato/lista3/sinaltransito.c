#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char cor[30];
    printf("qual a cor do semaforo?\n");
    fgets(cor,30,stdin);
    cor[strcspn(cor, "\n")] = '\0'; // remove newline
    

    if (strcmp(cor, "vermelho") == 0)
    {
        printf("aguarde..\n");
        sleep(10);
        printf("obrigado  por aguardar");
    }
    else if (strcmp(cor, "amarelo") == 0)
    {
        printf("aguarde 3  segundos..\n");
        sleep(1);
        printf("pronto agora ja pode ir");
    }else if( strcmp(cor, "verde") == 0){
        printf("pronto agora ja pode ir");
    }

    return 0;
}