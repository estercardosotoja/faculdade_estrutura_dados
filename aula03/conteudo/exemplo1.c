#include <stdio.h>
//Listas Encadeadas
/*
main() {  
    struct noh {
	    int mat;
	    struct noh *prox;
    };
    typedef struct noh lista;
}*/
//or
struct noh {
	 int mat;
	 struct noh *prox;
};

main(){

typedef struct noh lista;

lista *inicio;
inicio = (lista*)malloc(sizeof (lista));
inicio->prox = NULL;
};
