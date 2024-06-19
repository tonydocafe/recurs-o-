#include <stdio.h>

int intervalo(int maior, int menor) {
    if (maior == menor) {
        return menor;
    } else {
        return maior + intervalo(maior - 1, menor);
    }
}

int main() {
    int maior, menor;
    printf("Digite o maior numero\n");
    scanf("%i", &maior);
    printf("Digite o menor numero\n");
    scanf("%i", &menor);

    if (maior < menor) {
        printf("Erro: o maior número deve ser maior ou igual ao menor número.\n");
    } else {
        printf("A soma do intervalo é igual a %i\n", intervalo(maior, menor));
    }

    return 0;
}
