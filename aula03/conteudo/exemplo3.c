#include<stdio.h>
#include<stdlib.h>

//Funcao para insercao

main(){
    void insere(){
        lista *novo=NULL;
        novo = (lista*) malloc (sizeof (lista));
        if (!novo){
            printf("\nNao existe espaco na memoria!");
            exit(1);
    }
    printf("\nDigite a matricula: ");
    scanf("%d",&novo->mat);
    printf("\nDigite o nome: ");
    scanf("%s",onome);
    novo->nome = (char*) malloc (strlen(onome)+1);
    strcpy(novo->nome,onome);
    fflush(stdin);
    printf("\nDigite o sexo: ");
    scanf("%s",novo->sexo);
    fflush(stdin);
    if (inicio->prox == NULL){
        inicio->prox = novo;
        novo->prox = NULL;
    }else{
        novo->prox = inicio->prox;
        inicio->prox = novo;
        }
    }	
}



