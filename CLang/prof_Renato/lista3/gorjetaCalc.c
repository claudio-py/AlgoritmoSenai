#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main()
{
    char nota;
    float conta;

    printf("digite qual foi o valor da sua conta:\n");
    scanf(" %f", &conta);

    printf("\nqual nota voce gostaria de dar para o atendimento e qual gorjeta voce gostaria de pagar?\n");
    sleep(1);
    printf("\nDigite A se foi excelente e gostaria de pagar 15%% \n");
    sleep(1);
    printf("Digite B se foi bom e gostaria de pagar 10%% \n");
    sleep(1);
    printf("Digite C se foi ruim e vai pagar somente 5%% \n");
    scanf(" %c", &nota);

    switch (nota)
    {
    case 'A':
        printf("Otimo, estamos muito felizes que voce gostou\n sua gorjeta ficou %.2f e o total : %.2f ", conta * 0.15, (conta + (conta * 0.15)));
        break;
    case 'B':
        printf("Que bom que voce gostou,mas ainda estamos melhorando\n sua gorjeta ficou %.2f e o total : %.2f ", conta * 0.1, (conta + (conta * 0.1)));
        break;
    case 'C':
        printf("sentimos muito pelo ocorrido, deixe sua sujestao conosco\n sua gorjeta ficou %.2f e o total : %.2f ", conta * 0.5, (conta + (conta * 0.5)));
        break;
    }
    return 0;
}