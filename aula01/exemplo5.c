#include<stdio.h>
#include<conio.h>

/* 
** Ponteiros

Um ponteiro (= apontador = pointer) é um tipo especial de variável que armazena um endereço.

    - O & é um operador unário que devolve o endereço na memória do seu operando;
    - O * é um operador unário que devolve o valor da variável localizada no
endereço que segue; 

** Resumo 
    - & - “o endereço de”;
    - * - “o conteúdo de”;
*/

int main(){
    int x=10,y;
    int *p;
    p=&x;
    printf("p = %i\n",p);
    y=*p;
    printf("y = %i\n",y);
    getch();
}

//p = 2686788 -> endereço
//y = 10 -> valor