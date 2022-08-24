#include<stdio.h>
#include<stdlib.h>

//Funcao para impressao:
  void imprime(){
    if (inicio->prox==NULL)
        printf("\nFila vazia!\n");
        else{
            atual=inicio;
            do{
                atual=atual->prox;
                printf("\n\nMatricula: %d",atual->mat);
                printf("\nNome: %s",atual->nome);
                printf("\nSexo: %s",atual->sexo);
            }while (atual->prox!=NULL);
        }
    }	
    
