#include <stdio.h>
int main(){
    char text[100];
    printf("type a small text: \n");
    fgets(text, 100,stdin);

    printf("text: %s", text);
}