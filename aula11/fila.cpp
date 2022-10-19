#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Fila {
    int dado;
    struct Fila *prox;
};


int enfileira(struct Fila **topo, int valor){    
    struct Fila *aux = (struct Fila*) malloc(sizeof(struct Fila));

    if(aux!=NULL){
        aux->dados=v;
        aux->prox=NULL;
        if(*inicio==NULL){
            *inicio=aux;
        } else {
            (*fim)->prox=aux;
            *fim=aux;
        }
    }else{
        printf("\nNao foi Possivel Alocar!\n");
    }
}

int exibirFila(struct Fila **topo){
    struct Fila *aux = (struct Fila*) malloc(sizeof(struct Fila));

    if(*inicio!=NULL){
        aux=*inicio;
        while(aux!=NULL){
            printf("%i - ",aux->dados);
            aux=aux->prox;
        }
    }else{
         printf("\n Fila Vazia!\n");
    }
}

int desemFilera(struct Fila **topo){
    struct Fila *aux = (struct Fila*) malloc(sizeof(struct Fila));


    if(*inicio!=NULL){
        aux=*inicio;
        *inicio=(*inicio)->prox;
        free(aux);
    }else{
        printf("\nFila Vazia!\n");
    }
}

int buscarFila(struct Fila **topo, int valor){
    struct Fila *aux = (struct Fila*) malloc(sizeof(struct Fila));
    struct Fila *outra = (struct Fila*) malloc(sizeof(struct Fila));
    
}

 main(){
	
	struct Fila *topo;
	int op;
	int vlr = 0;
	
    topo->dado = NULL;
    topo->prox = NULL;


  do { 

		printf("\n \t ------ **!Fila!** ------ ");
		printf(" \n 1 - Inserir elemento na Fila  \n 2 - Exibir elementos da Fila \n 3 - Buscar elementos da Fila \n 4 - Remover elemento na Fila \n 5 - SAIR  \n Digite sua opcao: \t  ");
        scanf("%d", &op);

        switch(op) {
   
        case 1:
            printf("\n  \n ---- Inserir na Fila ---- : \n Digite o elemento: \t ");
            scanf("%i", &vlr);
            
			enfileira(&topo, vlr);
            break;

        case 2:
            printf("\n  \n ---- Exibir na Fila ---- :");  
            exibirFila(&topo);
            break;

        case 3:
            printf("\n  \n ---- Buscar na Fila ---- : \n Digite o elemento: \t ");
            scanf("%i", &vlr);
            
            buscarFila(&topo, vlr);
            break;

        case 4:
            printf("\n  \n ---- Removendo o elemento da Fila ---- \t ");             
            desemFila(&topo);
            break;

        case 5:
            printf("\n Finalizando ... \n Ateh :( ");
            break;
            
        default:
            printf("\n Opcao Invalida: ");
            break;
        }

    } while(op != 5);
    
    return 0;
}