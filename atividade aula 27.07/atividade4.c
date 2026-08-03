#include <stdio.h>

int main() {
    int x, y;

    printf("digite as coordenadas (x y):\n");

    for (;;) {
        scanf("%d %d", &x, &y);

        // se x ou y for zero, termina
        if (x == 0 || y == 0) {
            break;
        }

        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x < 0 && y > 0) {
            printf("segundo\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        } else {
            printf("quarto\n");
        }
    }

    return 0;
}