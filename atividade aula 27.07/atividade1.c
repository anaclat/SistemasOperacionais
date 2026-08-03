#include <stdio.h>

int main() {
    char nomes[10][50];
    char emails[10][50];
    int ocupado[10] = {0}; // 0 = vazio, 1 = ocupado
    int n, i, quarto, j;

    printf("quantos estudantes? (1 a 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nestudante %d\n", i + 1);
        printf("quarto (0 a 9): ");
        scanf("%d", &quarto);

        // se tiver ocupado, pergunta de novo (no maximo 10 vezes)
        for (j = 0; j < 10; j++) {
            if (ocupado[quarto] == 0) {
                break; // achou um livre
            }
            printf("esse quarto esta ocupado, escolha outro: ");
            scanf("%d", &quarto);
        }

        // le nome e email direto na vaga
        printf("nome: ");
        scanf("%s", nomes[quarto]);
        printf("email: ");
        scanf("%s", emails[quarto]);

        ocupado[quarto] = 1;
    }

    printf("\nrelatorio de ocupacoes:\n");
    for (i = 0; i < 10; i++) {
        if (ocupado[i] == 1) {
            printf("quarto %d: %s, %s\n", i, nomes[i], emails[i]);
        }
    }

    return 0;
}