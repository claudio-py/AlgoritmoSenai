#include <stdio.h>

int main()
{
    float nota = 0, resultado = 0;
    for (int i = 1; i < 6; i++)
    {
        printf("digite a %d  nota:\n", i);
        scanf(" %f", &nota);
    
        resultado += nota;
    }
     resultado /= 5;
    printf("a media de  notas foi: %2.f\n", resultado);

    if(resultado < 7) printf("por tanto, o aluno esta REPROVADO");
    else printf("por tanto, o aluno  esta APROVADO");
    return 0;
}