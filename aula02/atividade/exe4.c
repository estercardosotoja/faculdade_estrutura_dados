#include <stdlib.h>
#include <stdio.h>

void imprime (char *v, int n) { // Loop, porque a comparação do vetor nunca será satisfeita.
   char *c;
   for (c = v; c < v + n; v++)
      printf ("%c", *c);
}

main() {
    imprime("4", 2);
}
