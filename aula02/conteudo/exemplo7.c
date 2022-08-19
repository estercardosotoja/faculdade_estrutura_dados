#include <stdio.h>

// O número exato de bytes de uma variável é dado pelo operador sizeof: a expressão sizeof (int), por exemplo, dá o número de bytes de um int no seu computador. 

void main(){
    int a;
    int b;
    int c;
    int *ptr; // declara um ponteiro para um inteiro
              // um ponteiro para uma variável do tipo
    a = 90;
    b = 2;
    c = 3;
    ptr = &a;
    printf("Valor de ptr: %p, Conteudo de ptr: %d\n", ptr,*ptr);
              // %p = endereço do ponteiro ptr;
              // %d = conteudo do ponteiro *ptr;
    printf("B: %d, C: %d", b, c);
}