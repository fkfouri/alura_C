#include <stdio.h>

int main(){
    //comentario de uma linha

    /*
    comentario de varias linhas
    */
    printf("****************************************\n");
    printf("*Bem vindo ao jogo de adivinhacao      *\n");
    printf("****************************************\n");

    //criar uma constante tipo inteiro
    int numeroSecreto = 42;

    printf("O numero %d é secreto.\n", numeroSecreto);

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);   //vai ler o input do teclado no formato inteiro '%d' e atribuir a variavel chute.


}