#include <stdio.h>

int fatorial(int numero);

int main() {
    if (fatorial(0) != 1) {
        printf("Erro no teste do 0!\n");
        return 1;
    }

    if (fatorial(1) != 1) {
        printf("Erro no teste do 1!\n");
        return 1;
    }

    if (fatorial(6) != 720) {
        printf("Erro no teste do 6!\n");
        return 1;
    }

    printf("Todos os testes passaram!\n");
    printf("Criado por Richard Bortolozo");
    return 0;
}
