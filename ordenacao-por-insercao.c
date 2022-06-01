#include <stdio.h>
#include <stdlib.h>
#define TAM 10
unsigned short valor[] = {4,1,5,9,10,7,2,8,6,3};
void troca(short a, short b) {
	valor[a] += valor[b];
	valor[b] = valor[a] - valor[b];
	valor[a] -= valor[b];
}
void ordenacaoPorInsercao() {
	short i, j, k;
	for(k = 1; k < TAM; k++) {
		for(i = k, j = k - 1; i >= 0; i--, j--) {
			if(valor[i] < valor[j]) {
				troca(i, j);
			}
		}
	}
}
void imprimeVetor() {
	unsigned short i;
	for(i = 0; i < TAM; i++) {
		if(i < TAM - 1) {
			printf("%hu ", valor[i]);
		} else {
			printf("%hu", valor[i]);
		}
	}
	puts("");
}
int main() {
	imprimeVetor();
	ordenacaoPorInsercao();
	imprimeVetor();
	return 0;
}
