#include <stdio.h>

// Acessando o Conteúdo de uma Posição de Memória através de um Ponteiro

void main(){
    int x;
    int *ptr;
    x = 5;
    ptr = &x;
    printf("O valor da variavel X eh: %d\n", *ptr); // derreferenciando um ponteiro
    *ptr = 10; // usando derreferencia no "lado esquerdo" de uma atribuição
    printf("Agora, X vale: %d\n", *ptr);
}