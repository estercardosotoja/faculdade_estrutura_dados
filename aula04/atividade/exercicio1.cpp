#include <stdio.h>
#include <stdlib.h>

typedef struct no { //Estrutura do noh
	int dado;
	struct no *pro;
} No;

typedef struct { //Estrutura da lista
    No *inicio;
    int tam;
} Lista;

void add_inicio(Lista *lista, int valor){ 
 	No *novo_no =(No*)malloc(sizeof(no));
 	novo_no->dado = NULL;
	novo_no->pro = NULL; 
	
		
 	if (!novo_no){
        printf("\n \t - Nao existe espaco na memoria! \n ");
        exit(1);
    }
    novo_no->dado = valor;
        
    if (lista->inicio == NULL){
        lista->inicio = novo_no;
        novo_no->pro= NULL;
        lista->tam = lista->tam+1;
        printf("\n \t - Primeiro elemento da lista! \n "); 
        printf("\n \t - Adicionado elemento ao noh!! \n");
    }else{
        novo_no->pro = lista->inicio;
        lista->inicio = novo_no;
        lista->tam = lista->tam+1;
        printf("\n \t - Adionado o noh no inicio lista ! \n "); 
    }	    
};

void add_final(Lista *lista, int valor){
	int tam;
	No *aux =(No*)malloc(sizeof(no));
    No *novo_no =(No*)malloc(sizeof(no));
    
    novo_no->dado = NULL;
	novo_no->pro = NULL; 
	
	aux->dado = NULL;
	aux->pro = NULL; 
		
 	if (!novo_no){
        printf("\n \t - Nao existe espaco na memoria!\n ");
        exit(1);
    }
    novo_no->dado = valor;
        
     if (lista->inicio == NULL){
        printf("\n \t -  Primeiro elemento da lista! \n "); 
        lista->inicio = novo_no;
        novo_no->pro= NULL;
        lista->tam = lista->tam+1;
        printf("\n \t -  Adicionado elemento ao noh!! \n ");
    }else{
    	tam=lista->tam; 
		for(aux=lista->inicio; tam != 0; aux = aux->pro){
			if(aux->pro == NULL){
				printf("\n \t - Final da lista! \n ");
				aux->pro = novo_no;
				novo_no->pro = NULL; 
				tam--;
				break;
			}
		}
		printf("\n \t - Adionado o noh no fim da lista! \n "); 
	}
};

void imprimir(Lista *lista) {
	struct no *aux = NULL;
	if (lista->inicio == NULL) {
		printf("\n \t - Lista vazia! \n ");
	}else {
		aux = lista->inicio;
		printf("\n  \t - Elementos da Lista! \n ");
		while(aux!=NULL){
			printf("\t %i \n \n ", aux->dado);
			aux=aux->pro;
		}
	}
}

void buscar(Lista *lista, int valor){
	No *aux = (No*)malloc(sizeof(no));	
	aux->dado = NULL;
	aux->pro = NULL; 
	int count=0;
	int tam= lista->tam; 

	if (lista->inicio == NULL) {
		printf("\n  \t - A lista vazia! ");
	} else {
		for(aux->pro = lista->inicio; tam >= 0; aux = aux->pro){
			if (aux->dado == valor){
				printf("\n \t - Elemento %i esta na lista \n ",aux->dado);
				count++;
			}
		tam--;
		} 
		if(count == 0 ) {
			printf("\n \t - Nao tem o elemento %i na lista \n", valor);
		}
	}
}

void remover(Lista *lista, int valor){ // Função não está pronta!
	No *aux, *remove = (No*)malloc(sizeof(no));		
	aux->dado, aux->pro, remove->dado, remove->pro = NULL;
	int count=0;
	int tam= lista->tam; 

	if (lista->inicio == NULL) {
		printf("\n \t - A lista vazia! ");
	} else {
		for(aux->pro = lista->inicio; tam >= 0; aux = aux->pro){
			if(lista->inicio->dado == valor){ // Primeiro elemento da lista
				printf("\n \t - Remover o primeiro elemento da lista");
				lista->inicio = aux->pro;
				remove = aux;
				count++;
				break;
				
			}else if(aux->pro == NULL && aux->dado == valor){ // Ultimo elemento da lista
				printf("\n \t - Ultimo elemento da lista");
				remove = aux;
				count++;
				break;
				
			}else{ 	// Elemento do meio lista
				printf("\n \t - Elemento do centro da lista");
				remove = aux;
				count++;
				break;
		
			}
		}
	}
	if (count == 0){
		printf("\n \t - Elemento nao estah na lista!");
	}
	
	free(remove);
	printf("Removido!");
}

main(){
	Lista lista;
	int valor = 3;
	int op = 0;
	
	lista.inicio = NULL;
	lista.tam = NULL; 

  do { 
        
		printf("\n \t **Lista Simples!** ");
        
		printf("\n 1 - Inserir no Inicio \n 2 - Inserir no Final \n 3 - Imprimir \n 4 - Remover \n 5 - Buscar \n 6 - Sair \n \n Digite a opcao: \t ");
        scanf("%d", &op);

        switch(op) {
   
        case 1:
            printf("\n Inserir no Inicio: ");
            scanf("\t %d", &valor);
            add_inicio(&lista, valor);
            break;

        case 2:
            printf("\n Inserir no Final: ");
            scanf("\t %d", &valor);
			add_final(&lista, valor);
            break;

        case 3:
            printf("\n Imprimir:");
 			imprimir(&lista);
            break;

        case 4:
            printf("\n Remover: ");
            scanf("\t %i", &valor);
            remover(&lista, valor);
            printf("\n Imprimir:");
 			imprimir(&lista);
            break;
            
        case 5:
			printf("\n Buscar: ");
            scanf("\t %i", &valor);
            buscar(&lista, valor);
            break;
            
        case 6:
            printf("\n Finalizando... ");
            break;

        default:
            printf("\n Opcao Invalida: ");
            break;
        }

    } while(op != 6);
    
    return 0;
};
