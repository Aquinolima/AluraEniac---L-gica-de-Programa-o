#include <stdio.h>
#include<stdlib.h>
int main(){
    // imprime o cabecalho do jogo
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;
    int chute;

    printf("Qual eh o seu chute?  ");
    scanf("%d", &chute);
    printf("seu chute foi %d \ns", chute);

    system("pause");
    return 0;
}
