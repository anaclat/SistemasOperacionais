#include <stdio.h> // importando biblioteca de entrada

// fgets
int main (){

    char curso [] = "Computação";
    char nome[100];

    printf("DIgite o nome da pessoa: ");
    fgets(nome, sizeof(nome), stdin);

    printf("%s", nome);

// separando

    int numeros[] = {1,2,3,4,5};

    int qtd = sizeof(numeros)/sizeof(numeros[0]);

    printf("Comprimento do vetor números = %d\n", qtd);

    return 0;

}