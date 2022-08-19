#include <stdlib.h>
#include <stdio.h>

main () {
    int *p, *q; // declara dois ponteiros

    p = (int*) malloc (sizeof (int)); // utiliza a função sizeof que determina o tamanho de um inteiro para a variavel p
    *p = 555; //atribui o valor 555 para endereço de memoria de p

    q = (int*) malloc (sizeof (int)); // utiliza a função sizeof que determina o tamanho de um inteiro para a variavel q
    *q = *p; //atribui o valor 555 para endereço de memoria de q que está no ponteiro p

    printf("%i %i", *p, *q); // exibe o valor dos dois ponteiros
    q = p;

    free (p); // libera a memória alocada das duas memorias
    free (q);

    q = NULL;
}