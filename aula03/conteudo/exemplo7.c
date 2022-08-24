#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define TAM 10

//Declaracao da Estrutura da Lista
struct nodo{
int dados;
struct nodo *prox;
};

//Funcao Insere a Esquerda
int InsereEsquerda(struct nodo **inicio,int v){
    struct nodo *novo;
    novo=(struct nodo *)malloc(sizeof(struct nodo));
    if(novo!=NULL){
        novo->dados=v;
        novo->prox=*inicio;
        *inicio=novo;
    } else {
        printf("Nao foi possivel alocar!\n");
    }
}

//Funcao para Impressao
int ImprimeLSE(struct nodo **inicio){
    struct nodo *aux;
    if(*inicio!=NULL){
        aux=*inicio;
        while(aux!=NULL){
            printf("%d - ",aux->dados);
            aux=aux->prox;
        }
    } else 
        printf("Lista Vazia!\n");
}

//Funcao Insere a Direita
int InsereDireita(struct nodo **inicio,int v){
    struct nodo *novo,*aux;
    novo=(struct nodo *)malloc(sizeof(struct nodo));
    if(novo!=NULL){
        novo->dados=v;
        novo->prox=NULL;
        if(*inicio==NULL) *inicio=novo;
        else{
            aux=*inicio;
        while(aux->prox!=NULL)aux=aux->prox;
            aux->prox=novo;
        }
    }
}

//Funcao Principal
int main(){
    struct nodo *ptri=NULL;
    int valor,nro,i;
    for(i=0;i<TAM;i++){
        valor=rand()%100;
        InsereEsquerda(&ptri,valor);
        //InsereDireita(&ptri,valor);
    }
    //imprime lista
    printf("\n\n--- Lista Simplesmente Encadeada ---\n\n");
    ImprimeLSE(&ptri);
    //Exclui nodo
    //Pesquisa valor
}
