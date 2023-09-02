#include <stdio.h>


void main() {
    int *x, value, y;
    value = 0xFF;
    x = &value;
    y = *x;

    printf("Valor de value: %d\n", value);
    printf("Endereço de value: %p\n", &value);
    printf("Valor de x (conteúdo do endereço apontado por x): %d\n", *x);
    printf("Endereço de x (endereço de memória de value): %p\n", x);
    printf("Valor de y: %d\n", y);
}
