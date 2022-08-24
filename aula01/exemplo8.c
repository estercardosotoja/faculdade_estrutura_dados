#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int Troca(int *x, int *y){ // Declarado dois ponteiros;
    int temp;
    temp=*x; // atribuido o conteudo de x para temp;
    *x=*y; // atribuido o conteudo de y para x;
    *y=temp; // atribuido o dado de tempo para y, que tinha o conteudo de x; 
}

int main(){
    int i=10,j=20;
    Troca(&i,&j); // passa o endereço; 
    printf("\n i = %i\n j = %i\n",i,j);
    getch();
}