#include <stdlib.h>
#include <stdio.h>
main(){
    int x, y; // declara as váriavéis
    int *p, *q; // declara os ponteiros
    p = &x; // atribui o endereço da variavel x
    q = &y; // atribui o endereço da variavel y
    *p = 123; // atribui ao ponteiro (p - endereço de x) o valor de 123
    *q = *p; // atribui ao ponteiro q  (o valor do ponteiro p, que é o endereço de x) o valor de 123
    printf("%i %i %p %p\n", x, y, p, q); // exibe os valores que estão nas váriaveis, sendo p e q os ponteiros por isso o %p
    printf("%i %i\n", *p, *q);
    printf("%p %p\n", &x, &y);
}