#include <stdio.h>
#include <math.h>

int main()
{
    float tempo, dist, quadraComp,veloc, voltas,tempVolta;


    printf("Digite por quanto tempo voce deseja correr em minutos ?\n");
    scanf(" %f", &tempo);
   

    printf("Digite qual distancia voce deseja correr em metros ?\n");
    scanf(" %f", &dist);

    printf("Digite o comprimento da quadra em metros?\n");
    scanf(" %f", &quadraComp);
    voltas = dist/quadraComp;
    tempVolta = tempo/voltas;
    tempo *= 60;
    veloc = (dist/tempo)*3.6;
  
     


    printf("velocidade: %.2f km/h\n" , veloc);
    printf("numero de voltas: %.2f\n" , voltas);
    printf("tempo de cada volta: %.1f minutos" , tempVolta);



    

}
