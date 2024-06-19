#include <stdio.h>

int multiplicar(int multiplicando, int multiplicador) {
    if (multiplicador == 0) {
        return 0;
    } else if (multiplicador > 0) {
        return multiplicando + multiplicar(multiplicando, multiplicador - 1);
    } else { // multiplicador < 0
        return -multiplicando + multiplicar(multiplicando, multiplicador + 1);
    }
}

int main() {
    int maior, menor;
    printf("Digite um numero\n");
    scanf("%i", &maior);
    printf("Digite outro numero\n");
    scanf("%i", &menor);
    printf("O resultado da multiplicação é: %i\n", multiplicar(maior, menor));

    return 0;
}
