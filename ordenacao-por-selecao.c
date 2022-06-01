#include <stdio.h>
#include <stdlib.h>
#define TAM 10
unsigned short valor[] = {4,1,5,9,10,7,2,8,6,3};
void troca(unsigned short a, unsigned short b) {
	valor[a] += valor[b];
	valor[b] = valor[a] - valor[b];
	valor[a] -= valor[b];
}
void ordenacaoPorSelecao() {
	unsigned short menVal, menorI = 0, iMenVal, i;
	while(menorI < TAM) {
		menVal = valor[menorI];
		iMenVal = menorI;
		for(i = menorI; i < TAM; i++) {
			if(valor[i] < menVal) {
				menVal = valor[i];
				iMenVal = i;
			}
		}
		if(valor[menorI] > valor[iMenVal]) {
			troca(menorI, iMenVal);
		}
		menorI++;
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
	ordenacaoPorSelecao();
	imprimeVetor();
	return 0;
}
