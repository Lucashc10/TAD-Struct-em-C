#include <stdio.h>
//Incluindo o ponto.h
#include "ponto.h"
//Implementando a struct
struct ponto {
	int x;
};
//Implementando os métodos
void capturaNumero(Ponto *p) {
	printf("digite um numero \n");
	//fazer p -> é a mesma coisa que fizesse um p.x(caso não fosse ponteiro)
	scanf("%d", &(p -> x));
}
void imprimeNumero(Ponto *p) {
	printf("%d \n", p -> x);
}
