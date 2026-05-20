#include <stdio.h>

int fatorial(int numero);

int main() {
    int numero;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d e %d\n", numero, resultado);

    printf("Criado por Richard Bortolozo");
    return 0;
}
