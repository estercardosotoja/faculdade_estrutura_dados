#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int GeraVetor(int *Vet){ // Gera um vetor com valores aleatórios.
    int i;
    for(i=0;i<TAM;i++){
        Vet[i]=rand()%100;
    }
}

float Media(int n, int *Vet){ // Faz a média dos valores do vetor 
    int i, s=0;
    for(i=0;i<n;i++){
        s+=Vet[i];
    }
    return (s/(float)n); 
}

int main(){
    int Vetor[TAM], i;
    GeraVetor(Vetor);
    printf("\nMedia do vetor eh = %.2f\n",Media(TAM,Vetor));
}