#include <stdlib.h>
#include <stdio.h>

main () {
	int *p, *q; // declara dois ponteiros 
		p = (int*) malloc (sizeof (int)); // utiliza a função sizeof que determina o tamanho de um inteiro para a variavel p 
		*p = 555; 		
		q = (int*) malloc (sizeof (int)); 
		*q = *p; 	
		printf("%i %i", *p, *q);
		q = p;
	free (p);
	free (q);
	q = NULL;
    //Já que cada int ocupa um tamanho de 4 caracteres, o sizeof retornou 12 porque tem 3 variaveis do tipo inteira. 
}
