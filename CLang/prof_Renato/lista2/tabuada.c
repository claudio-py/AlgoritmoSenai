#include <stdio.h>

int main(){
    int num;
    printf("digite o numero que voce deseja a tabuda:\n");
    scanf(" %d",&num);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \n",i,num, i*num);
    }
    return 0;
}