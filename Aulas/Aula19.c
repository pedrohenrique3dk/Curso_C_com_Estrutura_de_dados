#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "");
    //Como gerar um número aleatório em C?
    //Usa o tempo atual como uma semente

    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand()%10;

    //imprime o número gerado
    printf("Numero gerado: %d", r);

    return 0;
}
