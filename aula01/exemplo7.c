#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int Calcula(int x,int y, int &z, int &w){ // Declarado dois inteiros e dois ponteiros
    x=x+1;
    z=x+y; 
    w=x*y;
};

 int main(){
    
    int n1=3,n2=4,r1=1,r2=2;
    Calcula(n1,n2,r1,r2); 
    printf("\n%i %i : %i %i\n",n1,n2,r1,r2);

    getch();
 };