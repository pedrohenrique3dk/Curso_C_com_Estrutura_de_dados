#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    //Laços de repetição: While;
    //enquanto(determinada comparação for verdadeira)
    //execute{faça alguma coisa;}

    int i;
    printf("Digite um valor: ");
    scanf("%d", &i);

    while(i <= 100){
    printf("%d \n", i);
    i = i+1;


    }
    return 0;


}
