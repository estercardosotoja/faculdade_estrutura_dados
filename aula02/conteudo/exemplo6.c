#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

// A alocação dinâmica é gerenciada pelas funções malloc, realloc e free, que estão na biblioteca stdlib.

//A função malloc (o nome é uma abreviatura de memory allocation) aloca um bloco de bytes consecutivos na memória RAM (= random access memory) do computador e devolve o endereço desse bloco.

typedef struct {
    int dia, mes, ano;
} data;


main() {
    data *d;
    d = malloc (sizeof (data));
    d->dia = 31; 
    d->mes = 12; 
    d->ano = 2016;
    
    printf("Data: dia: %i mes: %i ano: %i", d->dia, d->mes, d->ano);
}; 