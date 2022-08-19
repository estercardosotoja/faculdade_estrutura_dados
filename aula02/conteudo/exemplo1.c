#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

main() {
    int a = 1, b = 2, c = 0;
    int *p; // p é um ponteiro para um inteiro
    int *q;
    p = &a; // o valor de p é o endereço de a
    q = &b; // q aponta para b
    c = *p + *q; // soma os valores que contem no endereço de p e q , que são a e b;

    printf("%p : %i", c, c);
}