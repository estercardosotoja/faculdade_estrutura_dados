#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void troca (int *p, int *q){
    int temp;
    temp = *p;
    printf("temp = %i \n", temp);
    *p = *q; 
    printf("p = %i \n", *p);
    *q = temp;
    printf("q = %i \n", *q);
}

main() {
    int p, q;
    int *i = 2; 
    int *j = 3;

    p = &i; 
    q = &j;
    
    troca (&p, &q);

    printf("p = %p \n", p);
    printf("q = %p \n", q);
};