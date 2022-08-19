#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

main() {
    int a = 1, b = 2, c = 0;
    int *p;
    int **r; // r é um ponteiro para ponteiro para inteiro
    p = &a;  // p aponta para a
    r = &p;  // r aponta para p e *r aponta para a
    c = **r + b;

    printf("A = %p : %i \n", a, a);
    printf("B = %p : %i \n", b, b);
    printf("C = %p : %i \n", c, c);
    printf("P = %p : %i : %i \n", p, p,*p);
    printf("R = %p : %i : %i : %i \n", r, r, *r, **r);
    
}