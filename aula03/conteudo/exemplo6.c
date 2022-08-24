#include<stdio.h>
#include<stdlib.h>

//Funcao para excluir um elemento da lista:


void exclui(){
    int matbusca,encontrou=0;
    printf("\n\nDigite a matricula para exclusao: ");
    scanf("%d",&matbusca);
    if (inicio->prox==NULL)
    printf("\nFila vazia! Busca para exclusao nao pode ser processada!\n");
    else{
        anterior = inicio;
        for (atual=inicio->prox; atual!=NULL; atual=atual->prox){
            if (matbusca==atual->mat){
                anterior->prox = atual->prox;
                free(atual);
                encontrou=1;
            }
            if (encontrou == 1)
            break;
            anterior=atual;
            if (atual->prox==NULL && encontrou==0)
            printf("\nRegistro para exclusao nao encontrado!\n");
        }
    }
}
