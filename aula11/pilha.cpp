#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pilha {
    int dado;
    struct Pilha *prox;
};


int empilhaPilha(struct Pilha **topo, int valor){    
    struct Pilha *aux = (struct Pilha*) malloc(sizeof(struct Pilha));

    if(aux!=NULL){
        aux->dado = valor;
        if(topo==NULL){
            aux->prox=NULL;
        } else{
            aux->prox= *topo;
            *topo=aux;
        }
    }else {
            printf("\n Nao foi possivel alocar!\n");
    }
}

int exibirPilha(struct Pilha **topo){
    struct Pilha *aux = (struct Pilha*) malloc(sizeof(struct Pilha));

    if(*topo!=NULL){
        aux=*topo;
        while(aux!=NULL){
            printf("%i\n",aux->dado);
            aux=aux->prox;
        }
    }else{
        printf("\nPilha Vazia!\n");
    }
}

int desempilha(struct Pilha **topo){
    struct Pilha *aux = (struct Pilha*) malloc(sizeof(struct Pilha));

    if(*topo!=NULL){
        aux=*topo;
        *topo=(*topo)->prox;
        free(aux);
    }else{ 
        printf("\nPilha Vazia!\n");
    }
}

int buscar_pilha(struct Pilha **topo, int valor){
    struct Pilha *aux = (struct Pilha*) malloc(sizeof(struct Pilha));
    struct Pilha *outra = (struct Pilha*) malloc(sizeof(struct Pilha));
    
    if(*topo!=NULL){
        while(*topo!=NULL){
            aux=*topo;
            empilhaPilha(&outra, topo->dado)
            if (*topo->dado == valor){
                printf('Dado: %i', valor)
            }
            *topo=(*topo)->prox;
            free(aux);
        }
        *topo=outra;
    }else {
        printf("\nPilha Vazia!\n");
    }
}

 main(){
	
	struct Pilha *topo;
	int op;
	int vlr = 0;
	
    topo->dado = NULL;
    topo->prox = NULL;


  do { 

		printf("\n \t ------ **!Pilha!** ------ ");
		printf(" \n 1 - Inserir elemento na pilha  \n 2 - Exibir elementos da pilha \n 3 - Buscar elementos da pilha \n 4 - Remover elemento na pilha \n 5 - SAIR  \n Digite sua opcao: \t  ");
        scanf("%d", &op);

        switch(op) {
   
        case 1:
            printf("\n  \n ---- Inserir na Pilha ---- : \n Digite o elemento: \t ");
            scanf("%i", &vlr);
            
			empilhaPilha(&topo, vlr);
            break;

        case 2:
            printf("\n  \n ---- Exibir na Pilha ---- :");  
            exibirPilha(&topo);
            break;

        case 3:
            printf("\n  \n ---- Buscar na Pilha ---- : \n Digite o elemento: \t ");
            scanf("%i", &vlr);
            
            buscar_pilha(&topo, vlr);
            break;

        case 4:
            printf("\n  \n ---- Removendo o elemento da Pilha ---- \t ");             
            desempilha(&topo);
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