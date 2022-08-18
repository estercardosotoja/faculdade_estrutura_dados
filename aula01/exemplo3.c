#include <stdio.h>
#include <stdlib.h>

int produto(int k,int z){
    return(k*z);
}
int soma(int x,int y){
    printf("Soma = %i\n", x+y);
}

int main(){
    int x=10, y=5, r;
    r = produto(x,y); 
    printf("Produto = %i\n",r); 
    soma(x,y);
};