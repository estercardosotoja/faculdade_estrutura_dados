#include <stdio.h>
#include <stdlib.h>

int SOMA(int a, int b){
    int result;
    result = a + b;
    return(result);
}

int main(){
    int soma = SOMA(1,2);
    printf("Valor da soma %i", soma); 
}; 