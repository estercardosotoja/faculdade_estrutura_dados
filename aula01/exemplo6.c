#include<stdio.h>
#include<conio.h>

int main(){
    int x = 20; 
    int *p1,*p2; 
    p1=&x; // atribui o endereço de x
    p2=p1; // atribui o endereço de p1 que possui o endereço de x;
    printf("\np1 = %i\n",p1);
    printf("\np2 = %i\n",p2);
    getch();
}