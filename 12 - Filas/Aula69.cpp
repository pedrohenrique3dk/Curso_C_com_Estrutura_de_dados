#include<stdio.h>
#include<stdlib.h>
#define TAM 10

// A fila é do formato First In - First Out

void imprime_vetor(int fila[TAM], int tamanho){
    int i;
    for (i = 0; i < TAM; i++){
        printf("%d ", fila[i]);
    }
}
void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if (*tras == TAM - 1){
        printf("Fila Cheia!");
        printf("\n");
    }else{
        *tras = *tras + 1;
        fila[*tras] = valor;

    } 
}
int main(void){
    int frente, tras;
    int fila[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int valor;
    int cont;
    fila_construtor(&frente, &tras);
    while(1){
        printf("\n");
        printf("Me de a quantidade de valores que quer colocar no vetor: ");
        scanf("%d", &valor);
        printf("\n");
        for(cont = 0; cont < valor; cont++ ){
            fila_enfileirar(fila, (cont + 3) , &tras);
        }
        printf("\n");
        imprime_vetor(fila, (tras - frente) + 1);
        printf("\n");
    }
    
    return 0;
}