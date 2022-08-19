#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

// Uma função que troque os valores de duas variáveis inteiras;

/* ERRADO! - A função recebe cópias das variáveis e troca os valores dessas cópias, enquanto as variáveis originais permanecem inalteradas.
    void troca (int i, int j) { // errado!
    int temp;
    temp = i; i = j; j = temp;
}*/

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
    int *i = 2; 
    int *j = 3;

    troca(&i, &j);
};