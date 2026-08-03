#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp, valor;
    int encontrou = 0;

    printf("digite 9 numeros inteiros:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &vetor[i]);
    }

    vetor[9] = 0;

    // ordena os 9 primeiros
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("vetor atual: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("digite o valor a remover: ");
    scanf("%d", &valor);

    // procura e transforma em 0
    for (i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            vetor[i] = 0;
            encontrou = 1;
        }
    }

    if (encontrou == 1) {
        // ordena o vetor inteiro de novo para o 0 ir pro final
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9 - i; j++) {
                if (vetor[j] > vetor[j + 1]) {
                    temp = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = temp;
                }
            }
        }

        printf("vetor apos remocao: ");
        for (i = 0; i < 10; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("valor nao encontrado\n");
    }

    return 0;
}