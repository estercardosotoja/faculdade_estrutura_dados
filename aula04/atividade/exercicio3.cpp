/* Descrever comportamento da Funções */

int Questao1(struct nodo **inicio){    // Recebe endereço no inicio da lista;
	struct nodo *del=NULL;			   // Cria varaiavel del auxiliar
	if(*inicio!=NULL){				   // Verifica se o endereço de inicio da lista está vazio;
		while(*inicio!=NULL){		   // inicia um laço de repetição (se diferente de null)
			del=*inicio;			   // del recebe o endereço de inicio (primeiro) elemento da lista 
			*inicio=(*inicio)->prox;   // a variavel do inicio recebe o proximo no endereço da 
									   // lista (segundo elemento); 
			free(del);				   // libera o espaço de memoria
		}
	}
	else printf("\nLista Vazia!\n");   // exibe em caso de estar vazia a lista
}

int Questao2 (struct nodo **inicio){  	   // Recebe endereço no inicio da lista;
	struct nodo *a=NULL, *p=NULL, *n=NULL; // Cria variaveis auxiliares;
	if (*inicio != NULL){				   // Verifica se o endereço de inicio da lista está vazio;
		a = *inicio;					   // a = recebe o endereço de inicio (primeiro) elemento da lista
		p = a->prox;					   // p = recebe o endereço do proximo (segundo) elemento da lista
	while (p != NULL){					   // inicia um laço de repetição (se diferente de null)
		n = a;							   // n = recebe o endereço de inicio (primeiro) elemento da lista
		a = p;							   // a = recebe o endereço do proximo (segundo) elemento da lista
		p = a->prox;					   // p = recebe o endereço do proximo (terceiro) elemento da lista
		a->prox = n;					   
		
		
		// p = recebe o endereço do proximo 
		}
		(*inicio)->prox = NULL;
		*inicio = a;
	}
}


int abcd(struct nodo **inicio,int v){	// Recebe endereço no inicio da lista;
	struct nodo *aux = *inicio, *ant;	// Cria variaveis ant e auxiliar recebendo dados de inicio;
	if(*inicio==NULL){					// Compara se o endereço de inicio da lista está vazio;
		printf("Lista Vaziaz\n");		// Exibe em caso de estar vazia a lista 
	}else{								// Compara se há dados 
		if((*inicio)->dados==v){		// Compara se os dados estão iguais 	
			*inicio=(*inicio)->prox;	// Incio recebe endereço no proximo elemento da lista (segundo) 
		}else{							// Em caso do dado ser diferente 
			while(aux!=NULL){			// Inicia um laço de repetição (auxiliar está diferente de null)
				if(aux->dados==v){		// Compara se auxiliar possui valores iguais 
					ant->prox=aux->prox;// a variavel anterior recebe o valor da auxliar proximo (no 
										// segundo elemento da lista recebe anterior) 
					break;				//	
				} 						// fim do if
				ant=aux;				// auxiliar recebe a o segundo elemento
				aux=aux->prox;			// auxiliar recebe a o terceiro elemento
			}							// fim do while
		}								// fim do else
		free(aux);						// libera espaço de memoria
	}
}