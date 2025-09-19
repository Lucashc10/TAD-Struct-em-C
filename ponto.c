#include <stdio.h>
#include "ponto.h"

struct ponto {
	int x;
};

void capturaNumero(Ponto *p) {
	printf("digite um numero \n");
	scanf("%d", &(p -> x));
}
void imprimeNumero(Ponto *p) {
	printf("%d \n", p -> x);
}