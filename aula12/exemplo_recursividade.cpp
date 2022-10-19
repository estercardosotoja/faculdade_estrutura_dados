#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long Fatorial (long numero){
if (numero<=1){
    return 1;
}
else {
    return (numero * Fatorial(numero-1));
    }
}
main( ){
    long i;
    for(i=1; i<=10; i++){
    	printf("%d = %d", i, Fatorial(i));
	}
    return 0;
}