int fatorial(int numero) {
    int resultado = 1;
    int i;

    for (i = 1; i <= numero; i++) {
        resultado = resultado * i;
    }

    return resultado;
}
