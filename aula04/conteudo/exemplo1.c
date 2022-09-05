#include <stdio.h>
#include <stdalign.h>


struct nodod{
    struct nodod *ant;
    int dados;
    struct nodod *prox;
};

int InsereDireitaLDE(struct nodod **inicio,struct nodod **fim,int v){
    struct nodod *novo=NULL;
    novo=(struct nodod *)malloc(sizeof(struct nodod));
    if(novo==NULL) printf("\nNao foi possivel alocar!\n");
    else{
    novo->dados=v;
    novo->prox=NULL;
    novo->ant=*fim;
    if(*inicio==NULL) {*inicio=novo;}
    else {(*fim)->prox=novo;}
    *fim=novo;
    }//fim do else
}

int InsereEsquerdaLDE(struct nodod **inicio,struct nodod **fim,int v){
    struct nodod *novo=NULL;
    novo=(struct nodod *)malloc(sizeof(struct nodod));
    if(novo!=NULL){
        novo->dados=v;
        novo->ant=NULL;
        novo->prox=*inicio;
        if(*inicio==NULL){
            *fim=novo;
        }else {
            (*inicio)->ant=novo;
        }
        *inicio=novo;
    }else{
        printf("\nNao foi possivel alocar!\n"); 
    }
}

int ImprimeLDE(struct nodod **inicio){
struct nodod *aux=NULL;
    if(*inicio==NULL){ 
        printf("\nLista Vazia!\n");
    }else{
        aux=*inicio;
        while(aux!=NULL){
            printf("%i\t",aux->dados);
            aux=aux->prox;
        }//fim do while
    }//fim do else
}

int ExcluiNodoLDE(struct nodod **inicio,struct nodod **fim,int v){
struct nodod *aux=NULL,*del=NULL;
    if(*inicio==NULL){
        printf("\nLista Vazia!\n");
    else{
        if((*inicio)->dados==v){
            (*inicio)->prox->ant=(*inicio)->prox;
            del=*inicio;
            *inicio=(*inicio)->prox;
            free(del);
        }else{
            if((*fim)->dados==v){
                (*fim)->ant->prox=(*fim)->prox;
                del=*fim;
                *fim=(*fim)->ant;
                free(del);
            }else{
                aux=*inicio;
                while(aux!=NULL){
                    if(aux->dados==v){
                        del=aux;
                        aux->ant->prox=aux->prox;
                        aux->prox->ant=aux->ant;
                        free(del);
                    break;
                    }//fim do if
                    aux=aux->prox;
                }//fim do while
            }//fim do else *fim==v
        }//fim do else *inicio==v
    }//fim do else lista vazia
}

int main() {
    nodod lista, listaE, listaD; // criação de 3 listas
    int op, valor;

    // inicialização das listas
    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tam = 0;

    listaE.inicio = NULL;
    listaE.fim = NULL;
    listaE.tam = 0;

    listaD.inicio = NULL;
    listaD.fim = NULL;
    listaD.tam = 0;

    do { // menu de opções
        printf("\n 1 - InserirE
                \n 2 - InserirD
                \n 3 - Imprimir
                \n 4 - Remover
                \n 5 - Dividir lista
                \n 6 - Sair 
                \n");
        scanf("%d", &op);

        switch(op) {
        case 1:
            printf("\n Digite um valor a ser inserido a esqueda: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;

        case 2:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirFim(&lista, valor);
            break;

        case 3:
            printf("\n Lista:\n");
            imprimir(&lista);
            break;

        case 4:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            remover(&lista, valor);
            break;

        case 5:
            printf("Finalizando...\n");
            break;

        case 6:
            dividirLista(&lista, &listaI, &listaP);
            break;

        default:
            printf(\n "Opcao invalida!\n");
        }

    } while(opcao != 6);
    
    return 0;
};