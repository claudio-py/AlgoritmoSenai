#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char senha[30];
    int i = 0, tem_num = 0, tem_letra = 0;
    
    printf("Digite uma senha maior de 8 caracteres e menor de 30 que contenha letras e numeros\n");
    scanf("%[^\n]s", senha);

    while (senha[i])
    {
            if (isdigit(senha[i]))
            {
                tem_num = 1;
            }
            if (isalpha(senha[i]))
            {
                tem_letra = 1;
            }
            i++;
    }

   
}