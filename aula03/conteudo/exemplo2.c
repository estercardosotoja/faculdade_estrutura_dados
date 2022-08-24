#include<stdio.h>
#include<stdlib.h>

//Função para inicializaÃ§Ã£o:

main(){

 struct noh {
    int mat;
    char *nome;
    char sexo[1];
    struct noh *prox;
 };

 typedef struct noh lista;
 
 char onome[256];
 lista *inicio=NULL;
 lista *atual=NULL;
 lista *proximo=NULL;
 void inicializa(){
    inicio =(lista*) malloc (sizeof (lista));
    if (!inicio){
        printf("\n Nao existe espaco na memoria!");
        exit(1);
    }
    inicio->prox = NULL;
    }
}
