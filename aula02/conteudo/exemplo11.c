#include <stdlib.h>
#include <stdio.h>

// Alocação de Vetores

main() {
    int i;
    int *v;
    v = (int*)malloc(sizeof(int)*10); // 'v' é um ponteiro para uma área que
                                      // tem 10 inteiros.
                                      // 'v' funciona exatamente como um vetor
    v[0] = 10;
    v[1] = 11;
    v[2] = 12;
    v[3] = 13;
    v[4] = 14;
    v[5] = 15;
    v[6] = 16;
    v[7] = 17;
    v[8] = 18;
    v[9] = 19;

    for(i = 0; i < 10; i++){
        printf("v[%d]: %d\n", i, v[i]);
    }
     
    printf("\n Endereco de 'v': %p", v); // imprime o endereço da área alocada para 'v'
    printf("\n Contéudo de 'v': %i", *v);

    free(v); // libera a memoria;
}