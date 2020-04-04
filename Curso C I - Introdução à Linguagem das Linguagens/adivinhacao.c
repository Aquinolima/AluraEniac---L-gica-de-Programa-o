#include <stdio.h>
int main(){
    // imprime o cabecalho do jogo
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;

    while(1 ){

        printf("Tentativa %d! \n", tentativas);
        printf("Qual eh o seu chute?  ");
        scanf("%d", &chute);
        printf("seu chute foi %d \n", chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");

            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Voce acertou, Parabens! \n ");
            printf("Jogue novamente, voce eh um bom jogador! \n ");

            break;
        }
        else if(maior){
            printf("Voce errou!\n");
            printf("Seu chute foi maior que o numero secreto!\n");
            }
        else {
            printf("Voce errou!\n");
            printf("Seu chute foi menor que o numero secreto!\n");
            }
        tentativas++;

    }
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    return 0;
}
