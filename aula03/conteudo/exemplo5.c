#include<stdio.h>
#include<stdlib.h>

//Funcao para busca sequencial:

    void busca(){
    int matbusca,encontrou=0;
    printf("\n\nDigite a matricula para busca: ");
    scanf("%d",&matbusca);
    if (inicio->prox==NULL)
        printf("\nFila vazia! Busca nao pode ser processada!\n");
    else{
        for (atual=inicio->prox; atual!=NULL; atual=atual->prox){
            if (matbusca==atual->mat){
                printf("\n\nMatricula: %d",atual->mat);
                printf("\nNome: %s",atual->nome);
                printf("\nSexo: %s",atual->sexo);
                encontrou=1;
            }
            if (atual->prox==NULL && encontrou==0){
                printf("\nRegistro nao encontrado!\n");
            }
        }
    }
    }	
    

