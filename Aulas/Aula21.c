#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    //La�os de repeti��o: While;
    //enquanto(determinada compara��o for verdadeira)
    //execute{fa�a alguma coisa;}

    int i;
    printf("Digite um valor: ");
    scanf("%d", &i);

    while(i <= 100){
    printf("%d \n", i);
    i = i+1;


    }
    return 0;


}
