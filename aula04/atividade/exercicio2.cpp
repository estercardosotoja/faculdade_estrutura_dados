/* Exercicio da Sala de Interação */

typedef struct No Slista; // Declara como um tipo de dado
struct No { //A declaração do no
    int dados;  // Dado do noh            
    Slista *prox,*ant; // Endereco do proximo e anterior dos noh  
};
 
void blabla(Slista **list){
    Slista *p;
    if(*list!=NULL){ // Se a lista não está vazia
        p=*list; 
        while(p->prox!=NULL){ // Se não está no ultimo elemento
            printf("%s->",p->dados); // Exibe os dados
            p = p->prox; // Passa para o próximo dado
        };
        printf("%s->",p->dados); 
    }
    else printf("\nLista Vazia");// Se a lista está vazia apresenta mensagem
};
 