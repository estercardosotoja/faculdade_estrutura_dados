#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

#define TAM 5

// Os elementos de qualquer vetor têm endereços consecutivos na memória do computador.

main() {
    int i;
    int *v;
    v = (int*)malloc(TAM * sizeof (int));
    
    for (i = 0; i < TAM; ++i) {
        scanf ("%i", &v[i]);
    };

    for (i = 0; i < TAM; ++i) {
       printf("\n Numero: %i", v[i]);
    };
}; 