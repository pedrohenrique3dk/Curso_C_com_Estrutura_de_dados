#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "");
    //Como gerar um n�mero aleat�rio em C?
    //Usa o tempo atual como uma semente

    srand(time(NULL));

    //Cria um n�mero aleat�rio de 0 a 9
    int r = rand()%10;

    //imprime o n�mero gerado
    printf("Numero gerado: %d", r);

    return 0;
}
