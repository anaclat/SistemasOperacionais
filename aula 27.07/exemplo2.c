#include <stdio.h> // importando biblioteca de entrada

#define num_tarefas 100
#define MENSAGEM "Bem-vindo"

// função principal
int main (){

    int idade = 17;

    if(idade >= 18){
        printf("Maior de idade.\n");
    }
    else{
        printf("Menor de idade.\n");
    }

    printf("%s\n", MENSAGEM);

    return 0;
}