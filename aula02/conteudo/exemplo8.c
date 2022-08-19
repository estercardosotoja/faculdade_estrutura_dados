#include <stdio.h>

// Usando-se a função printf com o formatador %p na string de formato;

void main() {
    int x;
    int *ptr;
    ptr = &x;
    printf("O endereco de X eh: %p \n", ptr);
}