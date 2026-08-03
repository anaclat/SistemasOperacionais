#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp, novo;

    printf("digite 9 numeros inteiros:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &vetor[i]);
    }

    // ordena os 9 (bubble sort)
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("vetor ordenado: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", vetor[i]);
    }
    printf("0\n");

    printf("digite o novo valor: ");
    scanf("%d", &novo);

    // coloca no final
    vetor[9] = novo;

    // ordena tudo de novo (agora 10 posicoes)
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("vetor apos insercao: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}